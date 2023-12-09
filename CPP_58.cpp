```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a == b);
}

std::vector<int> common(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (auto i = 0; i < a.size(); ++i) {
        if (std::find(b.begin(), b.end(), a[i]) != b.end()) {
            result.push_back(a[i]);
        }
    }
    return result;
}

int main() {
    std::vector<int> v1 = {4, 3, 2, 8};
    std::vector<int> v2 = {};

    assert (issame(common(v1, v2), {}));

    std::cout << "The common elements of the two vectors are: ";
    for (auto i : common(v1, v2)) {
        std::cout << i << " ";
    }
    return 0;
}
```