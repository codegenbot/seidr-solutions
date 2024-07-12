#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c) {
    return {b, a - c};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}