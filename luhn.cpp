```c++
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if (!doubleNext) { 
            sum += digit;
        } else { 
            digit *= 2;
            if (digit > 9) digit -= 9;
            sum += digit;            
        }
        doubleNext = !doubleNext; // toggle for the next iteration
    }
    return sum % 10;
}

int main() {
    std::vector<int> digits = {};
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}