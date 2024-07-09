```cpp
#include <vector>
#include <algorithm>

bool operator==(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
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

std::vector<std::vector<int>> strange_sort_list(std::vector<std::vector<int>> lst) {
    std::vector<std::vector<int>> result;
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
    std::vector<std::vector<int>> lst = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> expected = {{1, 1, 1, 1}};
    if (lst != expected) {
        std::cout << "Test failed" << std::endl;
    } else {
        std::cout << "Test passed" << std::endl;
    }
    std::vector<std::vector<int>> result = strange_sort_list({{1, 1, 1, 1}});
}