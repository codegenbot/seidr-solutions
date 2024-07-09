#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i] * (doubleNext ? 2 : 1);
        if (digit > 9) digit -= 9;
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() {
    std::vector<int> testDigits = {4, 5, 3, 0, 0, 8, 1, 6, 7, 1, 1, 9, 2, 8, 5};
    std::cout << luhn(testDigits) << std::endl;
    return 0;
}