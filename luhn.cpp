```cpp
#include <iostream>
#include <string>

int luhn(int digits[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if ((i % 2) == 1) {
            int temp = digits[i] * 2;
            if (temp > 9)
                temp -= 9;
            sum += temp;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    std::string ccNumber;
    std::cout << "Enter a 16-digit credit card number: ";
    std::getline(std::cin, ccNumber);

    int digits[16];
    for (int i = 0; i < 16; i++) {
        digits[i] = ccNumber[i] - '0';
    }

    int n = sizeof(digits) / sizeof(digits[0]);
    std::cout << luhn(digits, n) << std::endl;
    return 0;
}