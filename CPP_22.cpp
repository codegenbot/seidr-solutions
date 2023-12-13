```cpp
#include <cassert>

template<typename T>
std::vector<T> filter_integers(std::initializer_list<T> values) {
    std::vector<T> result;
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