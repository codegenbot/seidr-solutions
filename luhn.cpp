#include <vector>
#include <iostream>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    for (int i = cardNumber.size() - 1; i >= 0; i--) {
        int digit = cardNumber[i];
        if ((i % 2 == 1)) {
            digit *= 2;
            if (digit > 9)
                digit -= 9;
        }
        sum += digit;
    }
    return sum % 10;

}

int main() {
    std::vector<int> cardNumber = {};
    for (int i = 0; i < 16; ++i) {
        int num;
        std::cin >> num;
        cardNumber.push_back(num);
    }
    std::cout << luhn(cardNumber) << std::endl;
    return 0;
}