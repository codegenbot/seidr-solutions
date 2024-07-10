#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    if(a.size()!=b.size()) return false;
    for(int i=0; i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        int max_val = *max_element(lst.begin(), lst.end());
        if (min_val == max_val) {
            for(int i:lst){
                if(i==min_val){
                    result.push_back(i);
                    lst.erase(remove(lst.begin(), lst.end(), i), lst.end());
                    break;
                }
            }
        } else {
            result.push_back(min_val);
            result.push_back(max_val);
            lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());
            lst.erase(remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}