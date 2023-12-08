#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> digits;

    for (int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        digits.push_back(digit);
    }

    int sum = 0;
    for (int i = 15; i >= 1; i -= 2) {
        int doubled = digits[i] * 2;
        if (doubled > 9) {
            doubled -= 9;
        }
        sum += doubled;
    }

    for (int i = 14; i >= 0; i -= 2) {
        sum += digits[i];
    }

    cout << sum << endl;

    return 0;
}