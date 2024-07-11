#include <string>
using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        int digit = N & 1;
        if (digit) sum++;
        N >>= 1;
    }
    string result = "";
    while (sum > 0) {
        result = (sum & 1 ? "1" : "0") + result;
        sum >>= 1;
    }
    return result;
}

int main() {
    assert(solve(963) == "10010");
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "Binary representation of the number is " << solve(N);
    return 0;
}