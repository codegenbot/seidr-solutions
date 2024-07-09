#include <vector>

int luhnAlgo(const std::vector<int>& digits) {
    int sum = 0;
    for (size_t i = 0; i < digits.size(); ++i) {
        int digit = digits[i];
        if ((digits.size() - 1 - i) % 2 == 1) { // double every other digit
            digit *= 2;
            if (digit > 9) { // subtract 9 from them if over 9
                digit -= 9;
            }
        }
        sum += digit;
    }
    return sum;
}