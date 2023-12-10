
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

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit > 9) {
            digit -= 10;
        }
        sum += digit * 2;
    }
    for (int i = digits.size() - 1; i >= 0; i--) {
        int digit = digits[i];
        if (digit > 9) {
            digit -= 10;
        }
        sum += digit;
    }
    return sum % 10 == 0;
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