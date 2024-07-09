```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i] <= lst[i-1]){
            vector<int> temp;
            for(int j = 0; j < i; j++){
                temp.push_back(lst[j]);
            }
            if(std::count(temp.begin(), temp.end(), lst[i]) > 1){
                return false;
            }
        }
    }
    return true;
}

int main(){
    assert (is_sorted({1, 2, 3, 4}) == true);
    std::cout << "Is sorted: " << is_sorted({1, 2, 3, 4}) << std::endl;
}