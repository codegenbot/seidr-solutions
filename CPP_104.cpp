#include <vector>
#include <unordered_set>
#include <cassert>

bool issame(std::unordered_set<int> a, std::unordered_set<int> b) {
    for (int digit : a) {
        if (b.count(digit)) {
            return true;
        }
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