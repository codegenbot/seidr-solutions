#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

auto unique_copy(std::vector<int>::iterator first, std::vector<int>::iterator last) {
    return std::vector<int>(std::unique_copy(first, last));
}