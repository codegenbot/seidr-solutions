#include <vector>
#include <unordered_set>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::unordered_set<int> digits_a(a.begin(), a.end());
    std::unordered_set<int> digits_b(b.begin(), b.end());

    for (int digit : digits_a) {
        if (digits_b.count(digit)) {
            return true;
        }
    }
    return false;
}

std::vector<int> unique_digits(std::vector<int> input) {
    std::unordered_set<int> result_set(input.begin(), input.end());
    return std::vector<int>(result_set.begin(), result_set.end());
}

int main() {
    assert(issame(unique_digits({135, 103, 31}), unique_digits({31, 135})));
    return 0;
}