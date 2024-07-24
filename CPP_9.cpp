#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> rolling_max(const std::vector<int>& input) {
    std::vector<int> result;
    for (size_t i = 0; i < input.size(); ++i) {
        int max_val = input[i];
        for (size_t j = i + 1; j < input.size(); ++j) {
            max_val = std::max(max_val, input[j]);
        }
        result.push_back(max_val);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), std::vector<int>({3, 3, 3, 100, 100})); 
    return 0;
}