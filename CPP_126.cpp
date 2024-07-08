#include <vector>

bool is_sorted(vector<int> lst){
    for(int i=1; i<lst.size();i++){
        if(lst[i-1] >= lst[i]){
            return false;
        }
    }
    vector<int> v(lst.begin(), lst.end());
    sort(v.begin(), v.end());
    if(count(v.begin(), v.end(), v[0]) > 1){
        return false;
    }
    return true;