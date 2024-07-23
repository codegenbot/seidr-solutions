```cpp
#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = digits.size() - 2; i >= 0; --i) {
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
    std::vector<int> digits;
    
    for (int i = 0; i < 16; ++i) {
        int digit;
        std::cout << "Enter a digit: ";
        std::cin >> digit;
        digits.push_back(digit);
    }
    
    int result = luhn(digits);
    return 0;
}