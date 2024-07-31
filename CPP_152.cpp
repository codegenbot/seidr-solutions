#include <vector>
#include <cassert>

bool compare(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return compare(a, b);
}