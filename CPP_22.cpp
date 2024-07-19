#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> filter_integers(const std::vector<int>& data) {
    std::vector<int> result;
    for (const auto& elem : data) {
        result.push_back(elem);
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 2, 3, 3, 5, 6}), {3, 3, 3}));
    return 0;
}