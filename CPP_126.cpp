#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    for(int i = 0; i < lst.size() - 1; i++){
        if(std::make_pair(lst[i],lst[i+1]) > std::make_pair(lst[i+1],lst[i])){
            return false;
        }
    }
    return true;
}