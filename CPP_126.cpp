```cpp
#include <vector>
bool is_sorted(const std::vector<int>& lst){
    if(lst.empty()) return true;
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            return false;
        }
    }
    for(int i = 0; i < lst.size(); i++){
        int count = 0;
        for(int j = 0; j < lst.size(); j++){
            if(lst[j] == lst[i]){
                count++;
            }
        }
        if(count > 1){
            return false;
        }
    }
    return true;
}