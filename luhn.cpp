```cpp
#include <vector>
#include <iostream>

int luhn(const std::vector<int>& cardNumber) {
    int sum = 0;
    bool alternate = false; 
    for (int c : cardNumber) { 
        if (alternate) {
            int doubled = c * 2; 
            if (doubled > 9) {
                doubled -= 9; 
            }
            sum += doubled;
        } else {
            sum += c; 
        }
        alternate = !alternate; 
    }
    return sum % 10;
}

int main() {
    // Example usage: test the Luhn algorithm with a sample credit card number
    std::vector<int> cardNumber = {3, 4, 9, 2, 7, 8, 6, 1, 6, 5, 3, 9, 2, 5, 7, 0};
    int result = luhn(cardNumber);
    std::cout << "Luhn check result: " << (result == 0 ? "Valid" : "Invalid") << std::endl;
    return 0;
}