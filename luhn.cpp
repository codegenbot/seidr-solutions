#include <vector>
#include <iostream>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i] * ((i % 2) + 1);
        if (digit > 9) {
            digit -= 9;
        }
        sum += digit;
    }
    return sum % 10;
}

int main() {
    std::vector<int> cardNumber = {4,3,2,8,7,9,6,0,5,5,5,9,3,4,2,1};
    int result = luhn(cardNumber);
    std::cout << "Result: " << result << std::endl;
    return 0;
}