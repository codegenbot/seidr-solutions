```cpp
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(int i1,int i2){
    if(i1==i2) 
        return true;    
    else return false;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    bool minThenMax = true;

    for (int i : lst) {
        if (minThenMax) {
            int min_element = *min_element(lst.begin(), lst.end());
            result.push_back(min_element);
            auto it = remove(lst.begin(), lst.end(), min_element);
            lst.erase(it, lst.end());
        } else {
            int max_element = *max_element(lst.begin(), lst.end());
            result.push_back(max_element);
            auto it = remove(lst.begin(), lst.end(), max_element);
            lst.erase(it, lst.end());
        }
        minThenMax = !minThenMax;
    }

    return result;
}