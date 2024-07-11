```cpp
#include <vector>
#include <iostream>

int luhn(int cardNumber) {
    int sum = 0;
    bool doubleNext = false;

    std::vector<int> numbers;
    while (cardNumber > 0) {
        numbers.push_back(cardNumber % 10);
        cardNumber /= 10;
    }
    
    for (int i = numbers.size() - 1; i >= 0; --i) {
        int digit = numbers[i];

        if ((numbers.size() % 2 == 1 && i > 0) || (numbers.size() % 2 == 0)) { 
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