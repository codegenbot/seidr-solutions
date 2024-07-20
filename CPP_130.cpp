#include <vector>
#include <cassert>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

std::vector<int> yourFunctionName(int n) {
    return std::vector<int>(n, 0);
}

int main() {
    int n = 2;
    std::vector<int> other = yourFunctionName(n);
    assert(issame(other, {0, 0}));

    other[0] = 1; 
    other[1] = 3;
    assert(issame(other, {1, 3}));

    std::cout << "Code fixed successfully!" << std::endl;
    return 0;
}