#include <iostream>
#include <vector>

int luhn(const std::vector<int>& digits) {
    int sum = 0;
    bool doubleNext = false;
    for (const auto& digit : digits) {
        if (doubleNext) {
            int doubledDigit = digit * 2;
            if (doubledDigit > 9) {
                doubledDigit -= 9;
            }
            sum += doubledDigit;
        } else {
            sum += digit;
        }
        doubleNext = !doubleNext;
    }
    return sum;
}

int main() {
    std::vector<int> digits = {4,3,2,1,8,7,6,5,4,3,2,1,8,7,6,5};
    std::cout << luhn(digits) << std::endl;
    return 0;
}