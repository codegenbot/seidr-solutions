#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool isDouble = false;

    for (int i = digits.size() - 1; i >= 0; --i) {
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
    std::vector<int> digits;
    for(int i = 0; i < 16; i++) {
        int num;
        std::cin >> num;
        digits.push_back(num);
    }
    
    int result = luhn(digits);
    std::cout << "The Luhn check result is: " << result << std::endl;
    return 0;
}