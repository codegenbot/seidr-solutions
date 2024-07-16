#include <algorithm>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end());
}