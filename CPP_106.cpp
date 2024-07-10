#include <vector>
#include <cassert>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> f(int n) {
    std::vector<int> result;
    for (int i = 0; i < n; ++i) {
        result.push_back(i % 2 == 0 ? std::accumulate(1 + std::begin(result), 1 + std::end(result), 1, std::multiplies<int>()) : std::accumulate(1 + std::begin(result), 1 + std::end(result), 0);
    }
    return result;
}

int main() {
    assert(issame(f(3), std::vector<int>{1, 2, 6}));
    return 0;
}