#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; i--) {
        int digit = digits[i];
        if ((i % 2 == 0 && digit != 9)) { 
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
    std::vector<int> digits = {};
    int result = luhn(digits);
    std::cout << "The Luhn check is: " << (result % 10 == 0 ? "valid" : "invalid") << std::endl;
    return 0;
}