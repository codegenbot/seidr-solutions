#include <vector>
bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] >= lst[i]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
        else
            return false;
    }
    return true;
}