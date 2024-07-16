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
    std::cout << "Enter the credit card number: ";
    for (int i = 0; i < 16; i++) {
        std::cin >> digits[i];
    }
    std::cout << "Luhn Check Result: " << luhn(digits) << std::endl;
    return 0;
}