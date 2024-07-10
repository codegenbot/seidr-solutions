#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        
        auto it_min = find(lst.begin(), lst.end(), min_val);
        auto it_max = find(it_min, lst.end(), max_val);
        
        result.push_back(*it_min);
        lst.erase(it_min);
        if (it_max != lst.end()) {
            result.push_back(*it_max);
            lst.erase(it_max);
        }
    }
    
    return result;
}