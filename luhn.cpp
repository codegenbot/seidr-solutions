#include <vector>
#include <iostream>

int luhnAlgorithm(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleDigit = false;
    
    for (int i = digits.size() - 1; i >= 0; i--) {
        int digit = digits[i];
        
        if (doubleDigit) {
            digit *= 2;
            if (digit > 9) {
                digit -= 9;
            }
        }
        
        sum += digit;
        doubleDigit = !doubleDigit;
    }
    
    return sum;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> digits(n);
    for (int i = 0; i < n; i++) {
        std::cin >> digits[i];
    }
    
    int result = luhnAlgorithm(digits);
    std::cout << result << std::endl;
    
    return 0;
}