#include <vector>
#include <iostream>
using namespace std;

int luhn(vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i] * 2;
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    vector<int> digits;
    for (int i = 0; i < 16; i++) {
        int digit;
        cin >> digit;
        digits.push_back(digit);
    }
    cout << luhn(digits) << endl;
}