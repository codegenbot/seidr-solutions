Here is the modified code:

```c
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
    std::vector<std::any> values_to_filter = {1, 'x', 2, 3, 'y', 4};
    std::cout << "Original vector: ";
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            std::cout << std::any_cast<int>(value) << " ";
        } else {
            std::cout << "Non-integer ";
        }
    }
    std::cout << std::endl;
    std::vector<int> result = filterIntegers(values);
    std::cout << "Filtered vector: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    assert(isSame(filterIntegers(values), {3, 3, 3}));
    return 0;
}