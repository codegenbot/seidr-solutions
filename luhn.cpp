#include <iostream>

int luhn(int digits[16]) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int temp = (i % 2 == 0) ? digits[i] : digits[i] * 2;
        if (temp > 9)
            sum += temp - 9;
        else
            sum += temp;
    }
    return sum;
}

int main() {
    int digits[16];
    int main_digits[] = {4,3,2,1,8,7,9,1,6,5,4,3,2,8,7,9};
    for (int i = 0; i < 16; i++) {
        digits[i] = main_digits[i];
    }
    std::cout << luhn(digits) << std::endl;
    return 0;
}