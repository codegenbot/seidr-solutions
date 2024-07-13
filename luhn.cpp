#include <iostream>

int luhn(int cardNumber) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        int digit = cardNumber % 10;
        cardNumber /= 10;
        if (i % 2 != 0) { 
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    int cardNumber = 4532015295970004; 
    std::cout << "Luhn's checksum is: " << luhn(cardNumber) << std::endl;
    return 0;
}