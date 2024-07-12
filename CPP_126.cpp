#include <algorithm>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    
    if (std::adjacent_find(sorted_lst.begin(), sorted_lst.end()) != sorted_lst.end()) {
        return false;
    }
    
    return std::is_sorted(lst.begin(), lst.end());
}