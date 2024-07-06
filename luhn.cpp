#include <vector>
#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

// Function to read input from user and return a vector of integers representing credit card digits
vector<int> get_digits() {
    std::string input;
    std::cin >> input;
    vector<int> digits;
    for (auto c : input) {
        if (isdigit(c)) {
            digits.push_back(atoi(&c));
        }
    }
    return digits;
}

// Function to implement Luhn's algorithm and return the sum of doubled digits
int luhn(vector<int>& digits) {
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
    vector<int> digits = get_digits(); // Get the credit card digits from user input or file
    int sum = luhn(digits); // Call the luhn function with the digits
    cout << "Sum of doubled digits: " << sum << endl; // Output the result
    return 0;
}