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

int main() {
    vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0}; // input data
    int sum = luhn(digits);
    cout << "Sum: " << sum;
}