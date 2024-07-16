#include <iostream>
#include <vector>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
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
    std::vector<int> digits = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; 
    int result = luhn(digits); // Pass the vector by value
    std::cout << "The Luhn checksum is: " << result << std::endl;
    return 0;
}