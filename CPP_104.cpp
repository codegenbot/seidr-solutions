#include <vector>
#include <algorithm>
#include <cassert>

bool unique_digits(const std::vector<int>& a, const std::vector<int>& b);

bool unique_digits(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a;
    std::vector<int> sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

assert(unique_digits({135, 103, 31}, {31, 135}));