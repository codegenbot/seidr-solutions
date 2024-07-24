#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

assert(issame(std::vector<int>{4, 3, 2, 8}, std::vector<int>{}));