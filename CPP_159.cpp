#include <vector>
#include <cassert>

std::vector<int> eat(int a, int b, int c) {
    return {a + b, b - c};
}

bool issame(std::vector<int> a, std::vector<int> b) { // Fix: Include 'std::'
    return a == b;
}