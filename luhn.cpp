
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int luhn(const vector<string>& digits) {
    int sum = 0;
    for (auto& digit : digits) {
        int doubledDigit = stoi(digit) * 2;
        if (doubledDigit > 9) {
            doubledDigit %= 10;
        }
        sum += doubledDigit;
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