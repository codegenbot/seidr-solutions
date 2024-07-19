#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> result = l;
    for (size_t i = 2; i < l.size(); i += 3) {
        std::sort(result.begin() + i - 2, result.begin() + i + 1);
    }
    return result;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {5, 6, 2, 1, 8, 9, 3, 4}));
    return 0;
}