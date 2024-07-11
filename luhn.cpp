```cpp
#include <iostream>
#include <vector>

int luhn(int cardNumber) {
    int sum = 0;

    std::vector<int> numbers;
    while (cardNumber > 0) {
        numbers.push_back(cardNumber % 10);
        cardNumber /= 10;
    }

    for (int i = numbers.size() - 1; i >= 0; --i) {
        int digit = numbers[i];

        if (i % 2 == 1) { 
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit;
    }

    return sum;
}

int main() {
    int cardNumber = 14946721334973;  
    std::cout << "The Luhn checksum for this card is: " << luhn(cardNumber) << std::endl;
    return 0;
}