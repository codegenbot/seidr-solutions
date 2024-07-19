#include <iostream>
#include <vector>
#include <any>
#include <cassert>

std::vector<int> filter_integers(const std::vector<std::any>& values) {
    std::vector<int> result;
    for (auto val : values) {
        if (val.type() == typeid(int).hash_code()) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(filter_integers({std::any(3), std::any('c'), std::any(3), std::any(3), std::any('a'), std::any('b')}), {3, 3, 3}));
    
    return 0;
}