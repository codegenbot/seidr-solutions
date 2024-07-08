#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) digit -= 9;
        }
        sum += digit;
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() {
    std::vector<int> digits = {3, 4, 5, 1, 3, 4, 2, 8, 2, 8, 9, 7, 3, 6, 5, 1}; 
    int result = luhn(digits);
    std::cout << result << std::endl;
    return 0;
}