```cpp
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    vector<int>::iterator it;
    for(it = unique(lst.begin(), lst.end()); it != lst.end(); ++it){
        if(std::distance(it, lst.end()) > 1){
            return false;
        }
    }
    return true;
}

int main(){
    assert(is_sorted({1, 2, 3, 4}) == true);
    return 0;
}