#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<std::vector<int>> strange_sort_vector(vector<int> lst) {
    vector<std::vector<int>> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        vector<int> temp;
        for (int i : lst) {
            if (i != minVal) temp.push_back(i);
        }
        if (!temp.empty()) {
            int maxVal = *max_element(temp.begin(), temp.end());
            result.push_back({minVal, maxVal});
            lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
            for (int i : temp) {
                if (i != maxVal) lst.push_back(i);
            }
        } else {
            result.push_back({minVal});
            lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
        }
    }
    return result;
}