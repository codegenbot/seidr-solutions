#include <vector>
#include <initializer_list>

int luhn(std::vector<int> digits) {
    int sum = 0;
    bool doubleDigit = false;

    for (int i = 0; i < digits.size(); ++i) {
        if (doubleDigit) {
            int digit = (digits[i] * 2) % 10;
            if (digit > 9) digit -= 9;
            sum += digit;
        } else
            sum += digits[i];
        doubleDigit = !doubleDigit; 
    }
    
    return sum;

}

int main() {
    std::vector<int> test1 = {4, 5, 3, 9, 2, 6, 5, 1, 7, 3, 2, 8};
    std::cout << "Test 1: " << luhn(test1) << std::endl;
    
    return 0;

}