#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; --i) {
        if (i % 2 == 1) { 
            int digit = digits[i];
            digit *= 2;
            if (digit > 9)
                digit -= 9;
            sum += digit;
        } else
            sum += digits[i]; 
    }
    return sum;
}

int main() {
    return luhn({4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5});
}