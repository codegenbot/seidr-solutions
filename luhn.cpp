#include <vector>
#include <iostream>
using namespace std;
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
vector<int> get_digits() {
    vector<int> digits;
    int input;
    while (cin >> input) {
        digits.push_back(input);
    }
    return digits;
}
int main() {
    vector<int> digits = get_digits(); // Get the digits from user input or file
    int sum = luhn(digits); // Call the luhn function with the digits
    cout << "Sum of doubled digits: " << sum << endl; // Output the result
    return 0;
}