#include <iostream>
#include <string>
#include <vector>
using namespace std;
int luhn(const vector<string>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = stoi(digits[i]) * 2;
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
    while (cin >> input) {
        digits.push_back(input);
    }
    return digits;
}
int main() {
    int sum = 0;
    cout << "Enter a credit card number: ";
    vector<string> digits = get_digits(); // Get the digits from user input or file
    if (digits.size() == 16) {
        sum = luhn(digits); // Call the luhn function with the digits
        cout << "Sum of doubled digits: " << sum << endl; // Output the result
    }
    else {
        cout << "Incorrect number of digits!" << endl;
    }
    return 0;
}