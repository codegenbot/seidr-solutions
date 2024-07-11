```cpp
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst);

bool is_sorted(vector<int> lst) {
    if(lst.size() <= 1) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] < lst[i-1]){
            return false;
        }
    }
    return true;
}