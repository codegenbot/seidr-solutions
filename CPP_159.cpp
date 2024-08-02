#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int a, int b, int c) {
    return {a + b, b - a, c};
}