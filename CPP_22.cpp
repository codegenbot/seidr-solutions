```
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> filter_integers(const std::vector<int>& values) {
    std::vector<int> result;
    for (int value : values) {
        if (value >= 0 && value <= 9) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> values = {3, 'c', 3, 3, 'a', 'b'};
    assert(issame(filter_integers(values), {3, 3, 3}));
    return 0;
}
```
