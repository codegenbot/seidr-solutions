```cpp
#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    vector<int> result;
    if (lst.empty()) {
        return result;
    }
    int min_val = *min_element(lst.begin(), lst.end());
    while (!lst.empty()) {
        result.push_back(min_val);
        auto it = std::remove_if(lst.begin(), lst.end(), [min_val](int x) { return x == min_val; });
        lst.erase(it, lst.end());
        if (lst.empty()) break;
        min_val = *max_element(lst.begin(), lst.end());
    }
    return result;
}

int main() {
    assert(issame(strange_sort_vector({111111}), {111111}));
    // rest of your code
}