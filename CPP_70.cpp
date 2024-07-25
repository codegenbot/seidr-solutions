```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
    if (lst.empty()) return result;

    std::vector<int> minMax;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        int max = *max_element(lst.begin(), lst.end());
        result.push_back(min);
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());
        result.push_back(max);
        lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
    }

    return result;
}

int main() {
    assert(issame(strange_sort_vector({1, 2, 3}), {1, 3, 2}));
}