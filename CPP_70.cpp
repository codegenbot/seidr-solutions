```cpp
#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty()) {
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    vector<int> lst = {1, 2, 3, 4};
    vector<int> sorted_list = strange_sort_list(lst);
    
    assert(issame(sorted_list, vector<int>{1, 4, 2, 3}));
    
    return 0;
}