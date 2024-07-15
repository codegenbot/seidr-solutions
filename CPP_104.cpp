#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> unique_digits(const std::vector<int>& x){
    std::vector<int> unique;
    for (int num : x) {
        std::vector<int> digits;
        while (num > 0) {
            int digit = num % 10;
            if (std::find(digits.begin(), digits.end(), digit) == digits.end()) {
                digits.push_back(digit);
            }
            num /= 10;
        }
        for (int digit : digits) {
            if (std::find(unique.begin(), unique.end(), digit) == unique.end()) {
                unique.push_back(digit);
            }
        }
    }
    return unique;
}