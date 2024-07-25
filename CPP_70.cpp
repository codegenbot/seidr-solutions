```
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == 2 && b == 5)
        return true;
    else
        return false;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin(), lst.end());
        if (issame(min_val, 2)) {
            int max_val = *max_element(lst.begin(), lst.end());
            if (issame(max_val, 5))
                break;
            else
                result.push_back(max_val);
        }
        else
            result.push_back(min_val);

        lst.erase(remove(lst.begin(), lst.end(), min_val), lst.end());

        if (!lst.empty())
            if (issame(*max_element(lst.begin(), lst.end()), 2))
                break;
            else
                result.push_back(*max_element(lst.begin(), lst.end()));
        lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
    }
    return result;
}