#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    for (size_t i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1]) {
            return false;
        }
    }
    
    if (std::unique(lst.begin(), lst.end()) != lst.end()) {
        return false; // Duplicates found
    }
    
    return true;
}