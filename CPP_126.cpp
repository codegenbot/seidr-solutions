#include <algorithm>
#include <vector>

bool is_sorted_and_unique(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end()) && (std::unique(lst.begin(), lst.end()) == lst.end());
}