```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst){
    for(int i = 1; i < lst.size(); i++){
        if(lst[i-1] > lst[i]){
            return false;
        }
        else if(std::count(lst.begin(), lst.end(), lst[i]) > 1){
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> list = {2, 3, 4};
    bool result = is_sorted(list);
    if(result) {
        std::cout << "The vector is sorted.\n";
    } else {
        std::cout << "The vector is not sorted.\n";
    }
    return 0;
}