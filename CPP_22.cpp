#include <iostream>
#include <vector>
#include <cassert>
#include <typeinfo>

std::vector<int> filter_integers(const std::vector<int>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (typeid(value) == typeid(int)) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> filtered_values = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(filtered_values == std::vector<int>({3, 3, 3}));
    
    return 0;
}