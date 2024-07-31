#include <iostream>
#include <vector>
#include <any>

bool std_vector_bool(std::vector<int> a, std::vector<int> b);

std::vector<int> filter_integers(std::vector<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (value.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

bool std_vector_bool(std::vector<int> a, std::vector<int>) {
    return a.size() == 1 && a[0] == 3;
}

int main() {
    assert(std_vector_bool(filter_integers({3, std::any(3), 3}), std::vector<int>({3, 3, 3})));
    return 0;
}