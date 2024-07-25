#include <algorithm>
#include <vector>
#include <limits>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    if (v1.size() != v2.size()) return false;
    for (int i = 0; i < v1.size(); ++i)
        if (v1[i] != v2[i]) return false;
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        
        result.push_back(min_val);
        auto it = remove(lst.begin(), lst.end(), min_val);
        lst.erase(it, lst.end());
        
        if (!lst.empty()) {
            result.push_back(max_val);
            it = remove(lst.begin(), lst.end(), max_val);
            lst.erase(it, lst.end());
        }
    }
    
    return result;
}