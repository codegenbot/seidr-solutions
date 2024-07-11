#include <vector>

int luhn(int cc) {
    int sum = 0;
    bool doubleNext = false;
    while (cc != 0) {
        int digit = cc % 10;
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
        cc /= 10;
    }
    return (sum % 10 == 0)? 1 : 0; 
}