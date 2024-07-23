```cpp
#include <vector>
#include <iostream>

#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> filter_integers(std::vector<int> input) {
    std::vector<int> result;
    for (int i : input) {
        if (static_cast<int>(i) > 0) {
            result.push_back(static_cast<int>(i));
        }
    }
    return result;
}

int main() {
    assert(issame(filter_integers({3, 3, 3}), {3, 3, 3}));
    return 0;
}