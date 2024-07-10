```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int> b){
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            result.push_back(min_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
        } else {
            result.push_back(min_val);
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    std::vector<int> result = strange_sort_vector({111111});
    assert(issame(result, {111111}));
}