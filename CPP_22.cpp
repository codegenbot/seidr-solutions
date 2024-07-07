#include <iostream>
#include <vector>
#include <list>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::list<int> values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if(value >= 0 && value <= 255) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}