#include <vector>

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] <= lst[i])
            continue;
        else{
            auto first = std::find_if(std::next(lst.begin(), i), lst.end(), [&](int x) { return x == lst[i]; });
            if(first == lst.end())
                continue;
            else
                return false;
        }
    }
    return true;
}