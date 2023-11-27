#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(const std::vector<int>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::is_same<decltype(value), int>::value) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> filtered_values = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered_values, {3, 3, 3}));

    return 0;
}