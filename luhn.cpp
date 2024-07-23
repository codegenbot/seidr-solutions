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
    std::vector<int> digits = {4,3,2,8,7,9,6,0,5,5,5,9,3,4,2,1};
    int result = luhn(digits);
    return 0;
}