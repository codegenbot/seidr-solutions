#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> rolling_max(const std::vector<int>& input) {
    std::vector<int> result;

    for (size_t i = 0; i < input.size(); ++i) {
        int curr_max = input[i];
        for (size_t j = i + 1; j < input.size(); ++j) {
            if (input[j] > curr_max) {
                curr_max = input[j];
            }
        }
        result.push_back(curr_max);
    }

    return result;
}

int main() {
    assert(issame(rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}