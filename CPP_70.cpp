#include <algorithm>

vector<int> strange_sort_list(vector<int> lst) {
    if (lst.empty()) return lst;

    vector<int> result;
    bool minThenMax = true;

    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        int maxVal = *max_element(lst.begin(), lst.end());

        if (minThenMax) {
            result.push_back(minVal);
            lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        } else {
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }

        minThenMax = !minThenMax;
    }

    return result;
}