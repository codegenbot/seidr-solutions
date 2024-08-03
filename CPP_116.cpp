#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> custom_sort(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    return vec;
}

int main() {
    assert(issame(custom_sort({2, 4, 8, 16, 32}), {2, 4, 8, 16, 32}));
    return 0;
}