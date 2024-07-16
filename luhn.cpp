```cpp
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 1) {
            int temp = digits[i] * 2;
            if (temp > 9) {
                temp -= 9;
            }
            sum += temp;
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> cardNumber = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 3, 1, 6, 4, 3, 5};
    if (cardNumber.size() != 16) {
        std::cout << "Error: Card number must be exactly 16 digits." << std::endl;
        return 1;
    }
    int result = luhn(cardNumber);
    return 0;
}