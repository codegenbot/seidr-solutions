```cpp
#include <cassert>
#include <vector>
#include <list>
#include <algorithm>

std::vector<int> filter_integers(std::list<int> values) {
    std::vector<int> result;
    for (auto value : values) {
        result.push_back(value);
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    assert(issame(filter_integers({3, 0, 3, 3, 1, 2}), {3, 0, 3, 3, 1, 2}));
    
    return 0;
}
```