#include <algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        
        auto it = find_if(lst.begin(), lst.end(), [minVal](int x) { return x != minVal; });
        lst.erase(it);
        
        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            
            it = find_if(lst.begin(), lst.end(), [maxVal](int x) { return x != maxVal; });
            lst.erase(it);
        }
    }
    
    return result;
}