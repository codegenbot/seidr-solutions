```c++
#include <vector>
#include <iostream>

int main() {
    std::vector<int> digits;
    int num;

    std::cout << "Enter a credit card number (16 digits): ";
    for(int i = 0; i < 16; ++i) {
        std::cin >> num;
        digits.push_back(num);
    }

    int result = luhn(digits);

    std::cout << "The Luhn check is: " << (result % 10 == 0 ? "valid" : "invalid") << std::endl;

    return 0;
}

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleNext = false;
    
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = digits[i];
        
        if (doubleNext) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleNext = !doubleNext;
    }
    
    return sum;
}