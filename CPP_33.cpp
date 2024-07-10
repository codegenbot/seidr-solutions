#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    auto sort_third = [&](std::vector<int>& vec) {
        std::sort(vec.begin(), vec.end());
    };

    std::vector<int> a_sorted = a;
    std::vector<int> b_sorted = b;
    sort_third(a_sorted);
    sort_third(b_sorted);

    return a_sorted == b_sorted;
}