#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

auto unique_copy(vector<int>::iterator first, vector<int>::iterator last) -> vector<int> {
    std::vector<int>(std::make_unique(first, last));
}