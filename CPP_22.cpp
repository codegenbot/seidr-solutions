```cpp
#include <vector>
#include <cassert>

std::vector<int> filter_integers(std::vector<int> values) {
    std::vector<int> result;
    for (auto value : values) {
        if (std::is_integral_v<decltype(value)>) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(filter_integers({3, 'c', 3, 3, 'a', 'b'}) == std::vector<int>({3, 3, 3}));
    return 0;
}
```