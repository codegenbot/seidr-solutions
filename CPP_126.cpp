#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
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

int main() {
    std::vector<int> lst = {1, 2, 3, 4};
    bool result = is_sorted(lst);
    if(result) {
        std::cout << "The array is sorted." << std::endl;
    } else {
        std::cout << "The array is not sorted." << std::endl;
    }
    return 0;
}