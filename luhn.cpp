#include <vector>
#include <iostream>

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
    std::vector<int> digits = {4, 5, 3, 9, 2, 6, 5, 3, 8, 7, 1, 6, 4, 3, 9, 0};
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}