#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> rolling_max(const std::vector<int>& numbers) {
    std::vector<int> result;
    int max_val = numbers[0];
    result.push_back(max_val);
    for (int i = 1; i < numbers.size(); ++i) {
        max_val = std::max(max_val, numbers[i]);
        result.push_back(max_val);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
}