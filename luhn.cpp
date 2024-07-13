#include <iostream>
#include <vector>

int luhn(std::vector<int> cardNumber) {
    int sum = 0;
    bool addNext = true;
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i] * (addNext ? 2 : 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
        addNext = !addNext;
    }
    return sum % 10 == 0 ? 0 : 1; 
}

int main() {
    std::vector<int> cardNumber = {4, 5, 3, 2, 0, 1, 5, 2, 9, 7, 0, 0, 0, 4};
    std::cout << "Luhn's checksum is: " << luhn(cardNumber) << std::endl;
    return 0;
}