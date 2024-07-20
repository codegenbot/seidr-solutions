#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++) {
        if(a[i]!=b[i]) return false;
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
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