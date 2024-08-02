#include <iostream>
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& vecA, const std::vector<int>& vecB) {
    if (vecA.size() != vecB.size()) {
        return false;
    }
    for (size_t i = 0; i < vecA.size(); ++i) {
        if (vecA[i] != vecB[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> f(int n) {
    return std::vector<int>(n, 2);
}