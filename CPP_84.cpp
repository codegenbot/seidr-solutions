#include <string>
using namespace std;

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }
    return to_string(sum);
}

int main() {
    assert(solve(963) == "10010");
}