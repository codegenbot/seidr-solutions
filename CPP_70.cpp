```cpp
#include <algorithm>
#include <vector>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    if (lst.empty()) return lst;

    std::sort(lst.begin(), lst.end());

    for(int i : lst){
        if(i % 2 == 0) result.push_back(i);
        else{
            int temp = *min_element(lst.begin(), lst.end());
            lst.erase(remove(lst.begin(), lst.end(), temp), lst.end());
            result.push_back(temp);
        }
    }

    return result;
}