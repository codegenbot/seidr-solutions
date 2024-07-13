#include <iostream>

int luhn(int cardNumber) {
    int sum = 0;
    for (int i = 0; i < 16; i++) {
        if ((i % 2 != 0)) {
            int temp = (cardNumber % 10) * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
            cardNumber /= 10;
        } else {
            sum += cardNumber % 10;
            cardNumber /= 10;
        }
    }
    return sum;
}

int main() {
    int cardNumber = 0; // Replace with your credit card number
    std::cout << "Luhn code: " << luhn(cardNumber) << std::endl;
    return 0;
}