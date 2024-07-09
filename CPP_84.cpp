#include <iostream>
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
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "The binary representation of the number is: " << solve(N) << endl;
    return 0;
}