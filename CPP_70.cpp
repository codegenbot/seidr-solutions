```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        auto min_val = *min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
        
        if (!lst.empty() && !std::all_of(lst.begin(), lst.end(), [min_val](int x) { return issame(x, min_val); })) {
            auto max_val = *max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}