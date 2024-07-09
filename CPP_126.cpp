#include <iostream>
#include <vector>

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            std::vector<int> temp;
            bool duplicate = false;
            for(int j = 0; j < lst.size(); j++){
                if(j == i) continue;
                if(temp.empty() || temp.back() != lst[j]){
                    temp.push_back(lst[j]);
                }else{
                    duplicate = true;
                    break;
                }
            }
            if(!duplicate && temp.size() == lst.size()-1){
                return true;
            }else{
                return false;
            }
        }
    }
    return true;
}

int main(){
    assert (is_sorted({1, 2, 3, 4}) == true);
}