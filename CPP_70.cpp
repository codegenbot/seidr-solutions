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
    std::vector<std::vector<int>> vec = {{1, 2}, {3, 4}, {5, 6}};
    std::vector<std::vector<int>> output = strange_sort_list(vec);
    for (const auto& v : output) {
        for (int i : v) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
    return 0;
}