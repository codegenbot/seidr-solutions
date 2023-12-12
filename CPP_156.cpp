#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function signature for int_to_mini_roman
string int_to_mini_roman(int number);

int main() {
    // Test the function with a few examples
    cout << "49 = " << int_to_mini_roman(49) << endl;
    cout << "123 = " << int_to_mini_roman(123) << endl;
    cout << "789 = " << int_to_mini_roman(789) << endl;
    return 0;
}

// Implementation of the function
string int_to_mini_roman(int number) {
    vector<string> romanNumerals = {"m", "cm", "d", "cd", "c", "xc", "l", "xl", "x", "ix", "v", "iv", "i"};
    string result;
    while (number > 0) {
        int digit = number % 10;
        if (digit < 4) {
            for (int i = 0; i < digit; i++) {
                result += romanNumerals[i];
            }
        } else if (digit == 4) {
            result += "iv";
        } else if (digit == 9) {
            result += "ix";
        } else {
            for (int i = digit - 5; i > 0; i--) {
                result += romanNumerals[i];
            }
            result += "v";
        }
        number /= 10;
    }
    return result;
}