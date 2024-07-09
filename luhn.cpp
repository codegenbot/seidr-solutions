#include <vector>
#include <iostream>
#include <initializer_list>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        int digit = digits[i];
        bool isDouble = (i % 2 != 0);
        if (isDouble) { 
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
    std::vector<int> digits;
    for (int i = 0; i < 16; i++) {
        digits.push_back(i % 2 == 0 ? i : i * 2 > 9 ? i * 2 - 9 : i * 2);
    }
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}