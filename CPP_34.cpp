#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

bool unique(std::vector<int> a) {
    std::sort(a.begin(), a.end());
    auto it = std::unique(a.begin(), a.end());
    a.erase(it, a.end());
    return a.size() == a.size();
}