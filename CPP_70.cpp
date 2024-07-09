```cpp
#include <initializer_list>
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        std::sort(a.begin() + i, a.end());
        std::sort(b.begin() + i, b.end());
        if (a != b) return false;
    }
    return true;
}

std::vector<std::vector<int>> strange_sort_list(std::vector<std::vector<int>> lst) {
    std::vector<std::vector<int>> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin()->begin(), lst.end()->end());
        for (auto& v : lst) {
            if (*std::min_element(v.begin(), v.end()) == min_val) {
                result.push_back(v);
                lst.erase(std::remove(lst.begin(), lst.end(), v), lst.end());
                break;
            }
        }
        while (!lst.empty() && !result.back().empty()) {
            int max_val = *std::max_element(result.back()->begin(), result.back()->end());
            for (auto& v : result) {
                if (*std::max_element(v->begin(), v->end()) == max_val) {
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
    int n = 6; // or whatever your desired number of elements in the vector is
    std::vector<int> vec(n); // initialize the vector with n elements
    for (int i = 0; i < n; i++) {
        vec[i] = i + 1; // fill the vector with numbers from 1 to n
    }
    assert(issame(std::vector<std::vector<int>>{{vec.begin(), vec.end()}}, {{vec.begin(), vec.end()}}));
    return 0;
}