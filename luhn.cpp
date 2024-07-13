#include <iostream>
#include <vector>

int luhn(std::vector<int> cardNumber) {
    int sum = 0;
    for (int i = 0; i < cardNumber.size(); i++) {
        if ((i % 2 != 0)) {
            int temp = cardNumber[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += cardNumber[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> cardNumber = {4, 5, 3, 2, 0, 1, 5, 2, 9, 7, 0, 0, 0, 4};
    std::cout << "Luhn's checksum is: " << luhn(cardNumber) << std::endl;
    return 0;
}