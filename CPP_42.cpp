```
#include <vector>

std::vector<int> incr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto x : v) {
        result.push_back(x + 1);
    }
    return result;
}

std::vector<int> decr_list(const std::vector<int>& v) {
    std::vector<int> result;
    for (auto x : v) {
        result.push_back(x - 1);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    // Your code here

    assert (issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}) , {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}
```