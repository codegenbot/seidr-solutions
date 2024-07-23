#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        
        if (isDouble) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }

        sum += digit; 
        isDouble = !isDouble;
    }

    return sum;
}

int main() {
    std::vector<int> digits = {1, 2, 3, 4, 5};
    int result = luhn(digits);
    std::cout << "Result: " << result << std::endl;
    return 0;
}