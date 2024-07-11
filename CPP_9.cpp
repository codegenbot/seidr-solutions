#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> rolling_max(const std::vector<int>& numbers) {
    std::vector<int> result;
    for (int i = 0; i < numbers.size(); ++i) {
        result.push_back(*std::max_element(numbers.begin() + i, numbers.end()));
    }
    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}