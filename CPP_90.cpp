#include <vector>
#include <algorithm>

int next_larger(std::vector<int> lst) {
    if(lst.size() < 2) return -1; 
    std::vector<int> new_lst;
    for(int i = 0; i < lst.size(); i++){
        bool found = false;
        for(int j = i+1; j < lst.size(); j++){
            if(lst[j] > lst[i]){
                new_lst.push_back(lst[i]);
                found = true;
                break;
            }
        }
        if(!found) new_lst.push_back(lst[i]);
    }
    return -1;
}