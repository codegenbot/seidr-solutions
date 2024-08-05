#include <vector>
#include <algorithm>

int next_smallest(const std::vector<int>& lst) {
    return *std::min_element(lst.begin(), lst.end());
}