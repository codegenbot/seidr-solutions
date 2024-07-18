#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> unique_digits(const std::vector<int>& input) {
    std::vector<int> unique;
    for (int num : input) {
        while (num > 0) {
            int digit = num % 10;
            if (std::find(unique.begin(), unique.end(), digit) == unique.end()) {
                unique.push_back(digit);
            }
            num /= 10;
        }
    }
    std::sort(unique.begin(), unique.end());
    return unique;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), std::vector<int>({1, 3, 5})));
    
    return 0;
}