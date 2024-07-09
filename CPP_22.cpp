#include <iostream>
#include <vector>
#include <list>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<std::any> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::any_cast<int>(value) != 0) {
            result.push_back(std::any_cast<int>(value));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, std::any(3), 3, std::any('a'), std::any('b')}), {3, 3, 3}));
    return 0;
}