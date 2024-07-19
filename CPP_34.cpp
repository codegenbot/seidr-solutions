#include <algorithm>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) {
    std::vector<int>(std::make_unique(first, last));
    return result;
}