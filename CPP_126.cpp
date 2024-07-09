#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    return std::is_permutation(lst.begin(), lst.end()) || (lst.size() <= 1);
}