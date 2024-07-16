#include <iostream>

int luhn(int* digits) {
    int sum = 0;
    bool doubleDigit = false;
    for (int i = 15; i >= 0; --i) {
        if (doubleDigit) {
            digits[i] *= 2;
            if (digits[i] > 9) {
                digits[i] -= 9;
            }
        }
        sum += digits[i];
        doubleDigit = !doubleDigit;
    }
    return sum % 10 == 0 ? 1 : 0;
}

int main() {
    int digits[16] = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    std::cout << luhn(digits) << std::endl;
    return 0;
}