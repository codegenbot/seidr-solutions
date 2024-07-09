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

std::vector<std::vector<int>> strange_sort_list(std::vector<int> num) {
    std::vector<std::vector<int>> result;
    while (!num.empty()) {
        auto min_val = std::min_element(num.begin(), num.end(), [](const auto& a, const auto& b) { return a < b; })->front();
        for (int i = 0; i < num.size(); i++) {
            if (*std::min_element(std::begin(*num.rbegin()), std::end(*num.rbegin())) == min_val) {
                std::vector<int> temp(num.begin(), num.end());
                result.push_back(temp);
                num.erase(std::remove(num.begin(), num.end(), *result.rbegin()), num.end());
                break;
            }
        }
    }
    return result;
}

int main() {
    int n = 6; 
    std::vector<int> vec(n); 
    for (int i = 0; i < n; i++) {
        vec[i] = i + 1; 
    }
    assert(issame(std::vector<std::vector<int>>{{vec.begin(), vec.end()}}, {{vec.begin(), vec.end()}}));
    return 0;
}