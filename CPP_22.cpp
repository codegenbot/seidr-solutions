#include <vector>
#include <cassert>
#include <iostream>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> filter_integers(const std::vector<int>& values) {
    std::vector<int> result;
    for (const auto& value : values) {
        if (std::is_same_v<decltype(value), int>) {
            result.push_back(value);
        }
    }
    return result;
}

int main() {
    std::vector<int> filtered = filter_integers({3, 'c', 3, 3, 'a', 'b'});
    assert(issame(filtered, std::vector<int>{3, 3, 3}));
    
    return 0;
}