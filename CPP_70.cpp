#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    
    if (lst.empty()) return result;

    sort(lst.begin(), lst.end());
    bool minThenMax = true;

    for (int i : lst) {
        if (minThenMax) {
            int val = *min_element(lst.begin(), lst.end());
            result.push_back(val);
            auto it = remove(lst.begin(), lst.end(), val);
            lst.erase(it, lst.end());
        } else {
            int val = *max_element(lst.begin(), lst.end());
            result.push_back(val);
            auto it = remove(lst.begin(), lst.end(), val);
            lst.erase(it, lst.end());
        }
        minThenMax = !minThenMax;
    }

    return result;
}