```cpp
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    int arr[] = {4, 3, 2, 8};
    std::vector<int> common(arr, arr + sizeof(arr) / sizeof(int));
    assert(issame(common, {}));
    return 0;
}
```