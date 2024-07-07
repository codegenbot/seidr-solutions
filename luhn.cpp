#include <iostream>
#include <string>
#include <vector>

int luhn(const vector<string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]) * 2;
        if (digit > 9 && digit < 20) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    vector<string> digits = {"4", "5", "3", "9", "7", "5", "3", "2", "7", "1", "8", "2", "9"};
    int result = luhn(digits);
    cout << result << endl;
    return 0;
}