#include <vector>
#include <iostream>
#include <cmath>

int luhn(std::vector<int>& digits) {
    int sum = 0;
    for (int i = digits.size() - 2; i >= 0; i -= 2) {
        int digit = digits[i];
        if (digit > 4) {
            digit = (digit * 2) % 9;
        }
        sum += digit;
    }
    return sum;
}

int main() {
    std::vector<int> digits = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3};
    int result = luhn(digits);
    std::cout << "Luhn's algorithm result: " << result << std::endl;
    return 0;
}