#include <vector>
#include <algorithm>
#include <cassert>

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
    std::vector<int> unique;
    for (int val : values) {
        while (val > 0) {
            int digit = val % 10;
            if (std::find(unique.begin(), unique.end(), digit) == unique.end()) {
                unique.push_back(digit);
            }
            val /= 10;
        }
    }
    std::sort(unique.begin(), unique.end());
    return unique;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), {1, 3, 5}));
    return 0;
}