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
        int min_val = *std::min_element(num.begin(), num.end());
        for (int i = 0; i < num.size(); i++) {
            if (*std::min_element(&num[i], &num[i] + 1) == min_val) {
                result.push_back({&num[i], &num[i] + 1});
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
    assert(true);
    return 0;
}