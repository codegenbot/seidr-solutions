#include <iostream>
#include <vector>
#include <any>
#include <cassert>
#include <typeindex>

namespace std {
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
}