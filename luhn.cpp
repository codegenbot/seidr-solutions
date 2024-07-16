```c++
#include <iostream>
#include <vector>

int luhn(int* digits, int length) {
    int sum = 0;
    for (int i = 0; i < length; i++) {
        if ((i % 2) == 0) { 
            sum += digits[i];
        } else {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue; 
        }
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1}; // Provide your credit card number here
    int result = luhn(&digits[0], digits.size());
    std::cout << "The Luhn checksum is: " << result << std::endl;
    return 0;
}