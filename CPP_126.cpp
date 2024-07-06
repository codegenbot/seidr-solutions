```c++
#include <vector>

bool is_sorted(vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            return false;
        }
    }
    vector<int> temp;
    for(int j = 0; j < lst.size(); j++){
        int count = 0;
        for(int k = 0; k < lst.size(); k++){
            if(lst[k] == lst[j])count++;
        }
        if(count > 1) return false;
        temp.push_back(lst[j]);
    }
    lst = temp;
    return true;
}