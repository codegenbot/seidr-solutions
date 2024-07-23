```cpp
#include <iostream>
#include <vector>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        if ((i % 2 == 1)) {
            int doubled = digits[i] * 2;
            if (doubled > 9) {
                sum += doubled - 9;
            } else {
                sum += doubled;
            }
        } else {
            sum += digits[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> cardNumber = {4, 5, 2, 8, 6, 2, 8, 3, 1, 7, 1, 4, 3, 9, 0, 2};
    int result = luhn(cardNumber);
    std::cout << "The Luhn checksum is: " << result;
    return 0;
}