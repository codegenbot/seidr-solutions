#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    std::vector<int> sorted_lst = lst;
    std::sort(sorted_lst.begin(), sorted_lst.end());
    
    for (size_t i = 0; i < sorted_lst.size() - 1; i++) {
        if (sorted_lst[i] == sorted_lst[i + 1]) {
            return false;
        }
    }
    
    return lst == sorted_lst;
}