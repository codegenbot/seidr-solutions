#include <algorithm>
#include <vector>
#include <iostream>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> a = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> b = {2, 3, 5, 9, 123, 0};

    std::vector<int> c(a);
    std::sort(c.begin(), c.end());
    std::sort(b.begin(), b.end());

    assert(issame(std::unique(c.begin(), c.end()), b.end()));
    
    return 0;
}