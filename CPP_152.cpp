#include <iostream>
#include <vector>
#include <cassert>

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(a[i] == b[i] ? 1 : 0);
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    const std::vector<int> expected = {0, 1, 1, 0};
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), expected);
    
    return 0;
}