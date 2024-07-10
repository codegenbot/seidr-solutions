#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

namespace cpp9 {
    bool issame(std::vector<int> a, std::vector<int> b) {
        return a == b;
    }

    std::vector<int> rolling_max(std::vector<int> input) {
        std::vector<int> result;
        for (int i = 0; i < input.size(); ++i) {
            result.push_back(*std::max_element(input.begin() + i, input.end()));
        }
        return result;
    }
}

int main() {
    assert(cpp9::issame(cpp9::rolling_max({3, 2, 3, 100, 3}), {3, 3, 3, 100, 100}));
    return 0;
}