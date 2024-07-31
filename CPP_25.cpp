#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool factorize(const std::vector<int>& a) {
    return issame({2, 3, 3}, a);
}