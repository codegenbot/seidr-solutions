#include <iostream>
#include <string>
#include <vector>

using namespace std;

int luhn(const vector<string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]) * 2;
        if (digit > 9) {
            digit %= 10;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    vector<string> digits;
    for (int i = 0; i < 16; i++) {
        string input;
        cin >> input;
        if (!input.empty()) {
            digits.push_back(input);
        }
    }
    int sum = luhn(digits);
    cout << "Sum of doubled digits: " << sum << endl;
}