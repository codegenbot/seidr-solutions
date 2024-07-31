#include <iostream>
#include <vector>
#include <any>

bool compareVectors(std::vector<int> a, std::vector<int> b) {
    return a.size() == 1 && a[0] == 3;
}

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(compareVectors(filter_integers({3, static_cast<std::any>(3), 3}), std::vector<int>({3, 3, 3})));
    return 0;
}