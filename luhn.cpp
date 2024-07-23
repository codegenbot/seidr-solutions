#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (isDouble) {
            if (digit * 2 > 9) {
                digit = digit * 2 - 9;
            } else {
                digit *= 2;
            }
        }

        sum += digit; 
        isDouble = !isDouble;
    }

    return sum % 10;

}

int main() {
    std::vector<int> digits(digits.begin(), digits.end());
    int result = luhn(digits);
    return 0;
}