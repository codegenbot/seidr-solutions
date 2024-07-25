#include <algorithm>

vector<int> strange_sort_vector(vector<int> lst) {
    vector<int> result;
    if (lst.empty()) return result;

    vector<int> minMax;
    for (int i = 0; i < lst.size(); i++) {
        if (i % 2 == 0) {
            auto it = std::min_element(lst.begin(), lst.end());
            minMax.push_back(*it);
            lst.erase(it);
        } else {
            auto it = std::max_element(lst.begin(), lst.end());
            minMax.push_back(*it);
            lst.erase(it);
        }
    }

    return minMax;
}