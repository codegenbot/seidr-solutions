#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> rolling_max(const std::vector<int>& input) {
    std::vector<int> result;
    std::vector<int> max_values;

    for (size_t i = 0; i < input.size(); ++i) {
        while (!max_values.empty() && max_values.back() < input[i]) {
            max_values.pop_back();
        }
        max_values.push_back(input[i]);
        result.push_back(max_values.front());
    }

    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}