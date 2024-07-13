```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
        doubleNext = !doubleNext;
    }

    return sum;
}

int main() {
    std::vector<int> creditCardNumber = {4, 3, 7, 1, 5, 9, 2, 6, 5, 3, 8, 4, 6, 1, 8, 2};
    int result = luhn(creditCardNumber);
    std::cout << "The credit card number is valid: " << (result % 10 == 0 ? "true" : "false") << std::endl;
    return 0;
}