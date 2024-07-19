#include <vector>
#include <cassert>

std::vector<int> tri(int n) {
    return std::vector<int>{n, n + 2};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}