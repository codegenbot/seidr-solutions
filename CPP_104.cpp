#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> unique_digits(std::vector<int> numbers) {
    std::vector<int> uniqueDigits;
    for (int num : numbers) {
        while (num > 0) {
            int digit = num % 10;
            if (std::find(uniqueDigits.begin(), uniqueDigits.end(), digit) == uniqueDigits.end()) {
                uniqueDigits.push_back(digit);
            }
            num /= 10;
        }
    }
    std::sort(uniqueDigits.begin(), uniqueDigits.end());
    return uniqueDigits;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    // Add more test cases as needed
    return 0;
}