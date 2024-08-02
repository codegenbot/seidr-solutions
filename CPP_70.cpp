#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    
    vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        
        auto it = find(lst.begin(), lst.end(), min);
        lst.erase(it);
        
        it = find(lst.begin(), lst.end(), max);
        lst.erase(it);
        
        result.push_back(min);
        result.push_back(max);
    }
    
    return result;
}