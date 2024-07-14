#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); ++i) {
        if (i % 2 == 1) { 
            int digit = digits[i] * 2;
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