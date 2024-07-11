#include <vector>

bool issame(const std::vector<int, std::allocator<int>>& a, const std::vector<int, std::allocator<int>>& b) {
    return a == b;
}