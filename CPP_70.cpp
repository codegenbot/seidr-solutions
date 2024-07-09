```cpp
#include <vector>
#include <algorithm>

bool isSame(vector<vector<int>> a, vector<vector<int>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i].size() != b[i].size()) {
            return false;
        }
        sort(a[i].begin(), a[i].end());
        sort(b[i].begin(), b[i].end());
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> strangeSortVector(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int minVal = *min_element(lst.begin(), lst.end());
        result.push_back(minVal);
        lst.erase(std::remove(lst.begin(), lst.end(), minVal), lst.end());
        if (!lst.empty()) {
            int maxVal = *max_element(lst.begin(), lst.end());
            result.push_back(maxVal);
            lst.erase(std::remove(lst.begin(), lst.end(), maxVal), lst.end());
        }
    }
    return result;
}

int main() {
    assert(isSame({{1, 2}, {3, 4}}, {{2, 1}, {4, 3}}));
    vector<int> result = strangeSortVector({1, 1, 1, 1});
}