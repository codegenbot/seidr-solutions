
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int luhn(const vector<string>& digits) {
    if (digits.size() != 16) {
        cerr << "Error: Invalid number of digits\n";
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = stoi(digits[i]);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

vector<string> get_digits() {
    vector<string> digits;
    string input;
    while (cin >> input && digits.size() < 16) {
        digits.push_back(input);
    }
    return digits;
}

int main() {
    vector<string> digits = get_digits();
    int sum = luhn(digits);
    if (sum == -1) {
        cerr << "Error: Invalid input\n";
        return 1;
    }
    cout << "Sum of doubled digits: " << sum << endl;
    return 0;
}