#include <iostream>
#include <vector>
#include <any>

bool areEqual(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filterIntegers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(areEqual(filterIntegers({3, std::any(3), 3}), std::vector<int>({3, 3, 3})));
    return 0;
}