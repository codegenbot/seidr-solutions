#include <vector>
#include <algorithm>

bool issame(int i1, int i2) {
    if(i1 != i2)
        return false;
    else
        return true;
}

std::vector<int> strange_sort_list(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    for (int i : lst) {
        bool minThenMax = true;

        while (!issame(*min_element(lst.begin(), lst.end()), *max_element(lst.begin(), lst.end())) && !lst.empty()) {
            if(minThenMax) {
                result.push_back(*min_element(lst.begin(), lst.end()));
                lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
            } else {
                result.push_back(*max_element(lst.begin(), lst.end()));
                lst.erase(remove(lst.begin(), lst.end(), *max_element(lst.begin(), lst.end())), lst.end());
            }
            minThenMax = !minThenMax;
        }

        if (!lst.empty()) {
            result.push_back(*min_element(lst.begin(), lst.end()));
            lst.erase(remove(lst.begin(), lst.end(), *min_element(lst.begin(), lst.end())), lst.end());
        }

    }

    return result;
}