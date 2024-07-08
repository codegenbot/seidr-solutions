```cpp
#include <vector>
#include <any>

bool isSame(std::vector<int> a, std::vector<int> b) {
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
    std::vector<std::any> values = {3, 'c', 3, 3, 'a', 'b'};
    std::vector<int> filteredValues = filterIntegers(values);
    assert(isSame(filteredValues, {3, 3, 3}));
    return 0;
}