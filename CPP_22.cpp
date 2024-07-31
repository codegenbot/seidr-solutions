#include <iostream>
#include <vector>
#include <cassert>
#include <any>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<std::any> input) {
    std::vector<int> result;
    for (const auto &item : input) {
        if (auto num = std::any_cast<int>(&item)) {
            result.push_back(*num);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 'c', 3, 3, 'a', 'b'}), {3, 3, 3}));
    
    return 0;
}