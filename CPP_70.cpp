```cpp
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a % 3 == 0 && b % 3 == 0)
        return true;
    else
        return false;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        if (issame(min_val, *max_element(lst.begin(), lst.end()))) {
            for (int i : lst) {
                if (i != min_val)
                    result.push_back(i);
            }
            return result;
        } else {
            result.push_back(min_val);
            lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());
            if (!lst.empty()) {
                int max_val = *max_element(lst.begin(), lst.end());
                result.push_back(max_val);
                lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
            }
        }
    }
    return result;
}