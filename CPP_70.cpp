```cpp
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        if (issame(lst.begin(), lst.end())) {
            result.push_back(*lst.begin());
            lst.clear();
        } else {
            int min_val = *min_element(lst.begin(), lst.end());
            int max_val = *max_element(lst.begin(), lst.end());
            result.push_back(min_val);
            auto it = find_if(lst.begin(), lst.end(), [max_val](int x) { return x == max_val; });
            result.push_back(*it);
            lst.erase(it);
        }
    }
    return result;
}