#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        sort(a.begin() + i, a.end());
        sort(b.begin() + i, b.end());
        if (a != b) return false;
    }
    return true;
}

vector<vector<int>> strange_sort_list(vector<vector<int>>& lst) {
    vector<vector<int>> result;
    while (!lst.empty()) {
        int min_val = *min_element(lst.begin()->begin(), lst.end()->end());
        for (auto& v : lst) {
            if (*min_element(v.begin(), v.end()) == min_val) {
                result.push_back(v);
                lst.erase(std::remove(lst.begin(), lst.end(), v), lst.end());
                break;
            }
        }
        while (!lst.empty() && !result.back().empty()) {
            int max_val = *max_element(result.back()->begin(), result.back()->end());
            for (auto& v : result) {
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

int main 
{
    vector<vector<int>> lst = {{1, 1, 1, 1}};
    assert(issame({1, 2}, {2, 1}));
    vector<vector<int>> result = strange_sort_list(lst);