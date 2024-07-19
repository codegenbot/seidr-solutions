#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> unique_digits(std::vector<int> numbers) {
    std::vector<int> unique;
    for (int num : numbers) {
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
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    return 0;
}