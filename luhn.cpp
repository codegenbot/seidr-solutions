#include <vector>
#include <iostream>

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
    std::cout << luhn({4,3,2,1,8,7,6,5,4,3,2,1,6,5,4,3}) << std::endl;
    return 0;
}