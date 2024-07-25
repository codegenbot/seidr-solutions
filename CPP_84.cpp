#include <iostream>
#include <string>

using namespace std;

string solve(int N) {
    string binary = "";
    while (N > 0) {
        int digit = N % 2;
        if (digit == 1) {
            binary.insert(0, "1");
        } else {
            binary.insert(0, "0");
        }
        N /= 2;
    }
    return binary;
}

int main() {
    int N;
    cin >> N;
    cout << solve(N);
    return 0;
}