#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i] * (isDouble ? 2 : 1);

        if (digit > 9) {
            digit -= 9;
        }

        sum += digit; 
        isDouble = !isDouble;
    }

    return sum;
}

int main() {
    std::vector<int> digits = {3, 4, 9, 0, 5, 5, 4, 0, 6, 7, 8, 1, 1, 1, 2, 1};
    int result = luhn(digits);
    return 0;
}