#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;

    if (lst.empty()) {
        return result;
    }

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());

        auto it = find(lst.begin(), lst.end(), minVal);
        auto endIt = find(it, lst.end(), maxVal);

        if (it != endIt) {
            result.push_back(*it);
            it = endIt;
        }

        while (*it <= minVal && it < lst.end()) {
            ++it;
        }

        lst.erase(it, endIt);
    }

    return result;
}