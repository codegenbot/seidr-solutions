```cpp
#include <vector>
#include <any>
#include <initializer_list>

bool issame(std::vector<int> const& a, std::vector<int> const& b) {
    return a == b;
}

std::vector<int> filterIntegers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    std::vector<int> a({3, 3, 3});
    assert(issame(filterIntegers({3, 'c', 3, 3, 'a', 'b'}), a));
    return 0;
}