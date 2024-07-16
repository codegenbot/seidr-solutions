#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());
        
        auto itMin = find(lst.begin(), lst.end(), minVal);
        auto itMax = find(lst.begin(), lst.end(), maxVal);
        
        result.push_back(*itMin);
        result.push_back(*itMax);

        lst.erase(itMin);
        lst.erase(--itMax);  // decrement itMax as erasing it would change its value
    }
    
    return result;
}