#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size());
    
    for (size_t i = 0; i < a.size(); ++i) {
        result[i] = a[i] == b[i] ? 0 : 1;
    }
    
    return result;
}

int main() {
    assert(issame(compare({1, 2, 3, 5}, {-1, 2, 3, 4}), {1, 0, 0, 1}));
    
    return 0;
}