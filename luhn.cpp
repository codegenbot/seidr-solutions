```cpp
#include <vector>
#include <iostream>

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
    std::vector<int> digits({0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15});
    int result = luhn(digits);
    std::cout << "The Luhn check digit is: " << result << std::endl;
    return 0;
}