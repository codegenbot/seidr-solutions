#include <unordered_set>
#include <vector>
#include <cassert>

bool issame(const std::unordered_set<int>& a, const std::unordered_set<int>& b) {
    std::unordered_set<int> digits;
    for (int digit : a) {
        if (digits.count(digit)) {
            return true;
        }
        digits.insert(digit);
    }
    for (int digit : b) {
        if (digits.count(digit)) {
            return true;
        }
        digits.insert(digit);
    }
    return false;
}

std::unordered_set<int> unique_digits(const std::vector<int>& numbers) {
    std::unordered_set<int> uniqueDigits;
    for (int num : numbers) {
        while (num > 0) {
            uniqueDigits.insert(num % 10);
            num /= 10;
        }
    }
    return uniqueDigits;
}

int main() {
    assert(!issame(unique_digits({135, 103, 31}), unique_digits({31, 135})));
    
    return 0;
}