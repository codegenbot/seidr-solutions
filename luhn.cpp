#include <iostream>
#include <vector>

int luhnAlgorithm(const std::vector<int>& digits) {
    int sum = 0;
    int doubleDigit;
    for (int i = 0; i < digits.size(); i++) {
        if (i % 2 == 0) {
            doubleDigit = digits[i] * 2;
            if (doubleDigit > 9) {
                doubleDigit -= 9;
            }
            sum += doubleDigit;
        } else {
            sum += digits[i];
        }
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