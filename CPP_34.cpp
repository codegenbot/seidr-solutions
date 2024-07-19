#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

auto unique_copy(std::vector<int>::iterator first, std::vector<int>::iterator last) -> std::vector<int> {
    return std::vector<int>(std::make_unique(first, last));
}