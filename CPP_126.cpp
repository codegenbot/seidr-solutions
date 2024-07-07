#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst) {
    vector<int> temp = lst;
    sort(temp.begin(), temp.end());
    
    for(int i = 0; i < lst.size(); i++) {
        if(lst[i] != temp[i]) return false;
    }
    
    return true;
}