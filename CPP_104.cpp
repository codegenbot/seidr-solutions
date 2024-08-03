#include <vector>
#include <unordered_set>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::unordered_set<int> unique_digits(std::vector<int> input) {
    std::unordered_set<int> result;
    for (int digit : input) {
        result.insert(digit);
    }
    return result;
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), unique_digits({31, 135})));
    return 0;
}