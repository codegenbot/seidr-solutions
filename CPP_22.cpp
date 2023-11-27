#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a) {
    return std::equal(a.begin(), a.end(), {3, 3, 3});
}

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
    assert(issame(filtered_values));

    return 0;
}