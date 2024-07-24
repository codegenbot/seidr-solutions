Here is the solution:

```cpp
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;
    
    bool first = true;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        
        auto it = remove_copy_if(lst.begin(), lst.end(), min_val, back_inserter(result));
        lst.erase(it, lst.end());
        
        if (first) first = false;
        else {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            
            auto it2 = remove_copy_if(lst.begin(), lst.end(), max_val, back_inserter(result));
            lst.erase(it2, lst.end());
        }
    }
    
    return result;
}