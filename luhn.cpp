```cpp
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
    int card_number[16];
    for (int i = 0; i < 16; i++) {
        std::cout << "Enter the digit: ";
        std::cin >> card_number[i];
    }
    std::cout << "The result is: " << luhn(card_number) << std::endl;
    return 0;
}