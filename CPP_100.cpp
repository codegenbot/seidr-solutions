
#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> result;
    for (int i = 1; i <= n; ++i) {
        result.push_back(2 * i);
    }
    return result;
}

int main() {
    assert(issame(make_a_pile(8) , std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}