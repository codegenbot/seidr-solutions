#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<float> sort_even(const std::vector<float>& data) {
    std::vector<float> sorted = data;

    // Sort the even indices in descending order
    for (size_t i = 0; i < sorted.size(); i += 2) {
        if (i + 2 < sorted.size()) {
            std::sort(sorted.begin() + i, sorted.begin() + i + 2, std::greater<float>());
        }
    }

    return sorted;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));

    return 0;
}