#include <iostream>
#include <vector>
#include <any>

bool isSame(typename std::vector<int> a, typename std::vector<int> b) {
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

int main2() {
    assert(isSame(filterIntegers({3, 3, 3}), std::vector<int>({3, 3, 3})));
    return 0;
}