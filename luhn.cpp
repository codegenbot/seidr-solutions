#include <vector>
#include <iostream>
#include <string>
#include <cstring>
#include <queue>
#include <stdio.h>
#include <math.h>
#include <map>
#include <set>
#include <stack>
#include <climits>
using namespace std;
/*
Given a vector of 16 digits, implement Luhn’s algorithm to verify a credit card number, such that it follows the following rules: double every other digit starting with the second digit. If any of the results are over 9, subtract 9 from them. Return the sum of all of the new digits.
*/
int luhn(vector<int> digits) {
    int result = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit > 4) {
            result += digit / 10 + digit % 10;
        } else {
            result += digit * 2;
            if (result > 9) {
                result -= 9;
            }
        }
    }
    return result;
}
int main() {
    vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3};
    cout << "The sum of the new digits is: " << luhn(digits) << endl;
    return 0;
}