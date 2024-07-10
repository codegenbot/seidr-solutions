#include <vector>
#include <algorithm>

bool has_duplicates(const std::vector<int>& lst) {
    return lst.size() != std::unordered_set<int>(lst.begin(), lst.end()).size();
}

bool is_sorted_and_unique(const std::vector<int>& lst) {
    return std::is_sorted(lst.begin(), lst.end()) && !has_duplicates(lst);
}