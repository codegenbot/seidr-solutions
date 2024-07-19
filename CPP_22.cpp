#include <iostream>
#include <vector>
#include <any>
#include <cassert>

bool issame(const std::vector<std::any>& a, const std::vector<std::any>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& v) {
    std::vector<int> result;
    for (const auto& elem : v) {
        if (elem.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(elem));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    return 0;
}