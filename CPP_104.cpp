#include <vector>
#include <algorithm>
#include <cassert>
#include <set>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> unique_digits(std::vector<int> values) {
    std::set<int> uniqueSet;
    for (int num : values) {
        while (num) {
            uniqueSet.insert(num % 10);
            num /= 10;
        }
    }
    std::vector<int> uniqueDigits(uniqueSet.begin(), uniqueSet.end());
    return uniqueDigits;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {31, 135}));
    return 0;
}