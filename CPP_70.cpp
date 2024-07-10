```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){
    return a==b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        minMax.push_back(min);
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it == min || *it == max) {
                it = lst.erase(it);
                --it;
                break;
            }
        }
    }

    return minMax;
}