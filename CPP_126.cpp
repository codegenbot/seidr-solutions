#include <vector>

bool is_sorted(std::vector<int> lst){
    std::vector<int> unique_lst(lst.begin(), lst.end());
    std::sort(unique_lst.begin(), unique_lst.end());
    
    if (unique_lst.size() != lst.size()) {
        return false;
    }
    
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] != unique_lst[i]) {
            return false;
        }
    }
    
    return true;
}