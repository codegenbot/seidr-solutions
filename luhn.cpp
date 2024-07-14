```cpp
#include <vector>
#include <iostream>

int luhn(std::vector<int> digits) {
    int sum = 0;
    for (int i = digits.size() - 1; i >= 0; --i) {
        int digit = (i < digits.size() - 1) ? digits[digits.size() - 1 - i % 2] : 0;
        if (digit * 2 > 9)
            sum += digit * 2 - 9;
        else
            sum += digit * 2;
    }
    return sum;
}

int main() {
    return luhn({4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5});
}