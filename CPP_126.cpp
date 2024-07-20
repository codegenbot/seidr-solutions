#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++){
                temp.push_back(lst[j]);
            }
            if(count(temp.begin(), temp.end(), lst[i]) > 1) return false;
            temp.clear();
            for(int j = i; j < lst.size(); j++){
                temp.push_back(lst[j]);
            }
            if(count(temp.end() - count(temp.begin(), temp.end(), lst[i-1]), temp.end(), lst[i-1]) > 1) return false;
            return true;
        }
    }
    return true;
}