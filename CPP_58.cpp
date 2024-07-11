#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <set>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> sorted_a = a, sorted_b = b;
    std::sort(sorted_a.begin(), sorted_a.end());
    std::sort(sorted_b.begin(), sorted_b.end());
    return sorted_a == sorted_b;
}

int main() {
    assert(issame({4, 3, 2, 8}, {}) == true);
    return 0;
}