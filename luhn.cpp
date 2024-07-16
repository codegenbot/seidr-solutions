#include <iostream>
#include <vector>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = 0; i < digits.size(); i++) {
        if ((i % 2) == 1) {
            int doubleValue = digits[i] * 2;
            if (doubleValue > 9)
                doubleValue -= 9;
            sum += doubleValue;
        } else
            sum += digits[i];
    }
    return sum;
}

int main() {
    std::vector<int> digits;
    for(int i = 0; i < 16; i++) {
        digits.push_back(i % 10 + 4);
    }
    std::cout << luhn(digits) << std::endl;
    return 0;
}