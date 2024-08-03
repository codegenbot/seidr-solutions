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
        result.push_back({minVal});
        lst.erase(remove(lst.begin(), lst.end(), minVal), lst.end());
        
        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back({maxVal});
            lst.erase(remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }
    return result;
}