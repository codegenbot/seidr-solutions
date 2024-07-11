```cpp
#include <iostream>
#include <vector>

int luhn(std::vector<int> cardNumber) {
    int sum = 0;

    for (int i = cardNumber.size() - 1; i >= 0; --i) {
        int digit = cardNumber[i];

        if ((cardNumber.size() - i) % 2 == 1) { 
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
    std::vector<int> cardNumber = {1,4,9,4,6,7,2,1,3,3,4,9};
    std::cout << "The Luhn checksum for this card is: " << luhn(cardNumber) << std::endl;
    return 0;
}