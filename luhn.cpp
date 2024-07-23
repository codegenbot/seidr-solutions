#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        if ((i % 2 == 1 && digit != 9)) { 
            digit *= 2;   
            if (digit > 9) {
                digit -= 9;
            }
        }
        sum += digit;
    }

    return sum;
}

int main() {
    std::vector<int> testDigits = {4, 7, 8, 3, 1, 6, 5, 3, 9, 0, 2, 8, 7, 9, 1, 1};
    std::cout << luhn(testDigits) << std::endl;
    return 0;
}