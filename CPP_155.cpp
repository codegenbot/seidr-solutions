```cpp
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> even_odd_count(int n) {
    std::vector<int> result(2);
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            result[0]++;
        } else {
            result[1]++;
        }
    }
    return result;
}

int main() {
    std::vector<int> a = even_odd_count(5);
    std::vector<int> b = {1, 0};
    assert(issame(a, b));
    return 0;
}
```