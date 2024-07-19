#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<std::any>& data) {
    std::vector<int> result;
    for (const auto& elem : data) {
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