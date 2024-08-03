#include <unordered_set>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
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

int main() {
    assert(!issame({1, 2, 3}, {4, 5, 6}));
    assert(issame({135, 103, 31}, {31, 135}));

    return 0;
}