#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    return {1, n + 2};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}