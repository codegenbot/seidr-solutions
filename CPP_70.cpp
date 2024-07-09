```
#include <vector>
#include <algorithm>

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
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

vector<vector<int>> strange_sort_list(vector<vector<int>> lst) {
    vector<vector<int>> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin()->begin(), lst.end()->end());
        for (auto &v : lst) {
            if (*min_element(v.begin(), v.end()) == min_val) {
                result.push_back(v);
                lst.erase(std::remove(lst.begin(), lst.end(), v), lst.end());
                break;
            }
        }
        while (!lst.empty() && !result.back().empty()) {
            int max_val = *max_element(result.back()->begin(), result.back()->end());
            for (auto &v : result) {
                if (*max_element(v->begin(), v->end()) == max_val) {
                    v->pop_back();
                    break;
                }
            }
            result.back().pop_back();
        }
    }
    return result;
}

int main() {
    assert(issame({{1, 2}, {3, 4}}, {{2, 1}, {4, 3}}));
    vector<vector<int>> result = strange_sort_list({{1, 1, 1, 1}});
}