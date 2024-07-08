#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> elimdup(std::vector<int> l) {
    std::sort(l.begin(), l.end());
    l.erase(std::std::unique(l.begin(), l.end()), l.end());
    return l;
}