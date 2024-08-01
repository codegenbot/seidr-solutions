```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 0; i < lst.size() - 1; i++){
        if(lst[i] >= lst[i+1]){
            if(std::count(lst.begin(), lst.end(), lst[i]) > 1)
                return false;
        }
    }
    return true;
}

int main(){
    std::vector<int> lst = {1, 2, 3};
    std::cout << is_sorted(lst) << std::endl;
    return 0;
}