#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    std::sort(array.begin(), array.end());
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    return 0;
}