```
#include <iostream>
#include <vector>

std::vector<int> filter_integers(std::vector<int> values) {
    std::vector<int> result;
    for (auto value : values) {
        if (value >= 0) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> values = {3, 'c', 3, 3, 'a', 'b'};
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}
```