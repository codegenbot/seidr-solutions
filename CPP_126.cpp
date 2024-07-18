#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end()) && std::adjacent_find(lst.begin(), lst.end()) == lst.end();
}