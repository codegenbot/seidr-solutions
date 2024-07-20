#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        auto it = std::min_element(lst.begin(), lst.end());
        result.push_back(*it);
        lst.erase(it);
        if (!lst.empty())
            it = std::max_element(lst.begin(), lst.end());
        else
            break;
        result.push_back(*it);
        lst.erase(it);
    }
    return result;
}