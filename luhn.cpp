#include <vector>

int luhn(vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2 == 1)) { 
            int doubledDigit = digits[i] * 2;
            if (doubledDigit > 9) { 
                doubledDigit -= 9;
            }
        } else {
            doubledDigit = digits[i];
        }
        sum += doubledDigit; 
    }
    return sum;
}