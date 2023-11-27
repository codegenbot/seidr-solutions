#include <iostream>
#include <string>

using namespace std;

string solve(int N);

int main() {
    assert(solve(963) == "10010");
    return 0;
}

string solve(int N) {
    int sum = 0;
    while (N > 0) {
        sum += N % 2;
        N /= 2;
    }

    string result;
    while (sum > 0) {
        result = char('0' + sum % 10) + result;
        sum /= 10;
    }

    return result;
}