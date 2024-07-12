```cpp
#include <iostream>
#include <vector>
#include <algorithm>

namespace std {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        auto it = std::remove_if(lst.begin(), lst.end(), [min_val](int x){ return x == min_val; });
        lst.erase(it, lst.end());

        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            it = std::remove_if(lst.begin(), lst.end(), [max_val](int x){ return x == max_val; });
            lst.erase(it, lst.end());
            result.push_back(max_val);
        } else {
            result.push_back(min_val);
        }
    }
    return result;
}