#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_array(std::vector<int> array) {
    if (array.empty()) return array;
    std::sort(array.begin(), array.end(), [&](int x, int y) {
        return (array.front() + array.back()) % 2 == 0 ? x > y : x < y;
    });
    return array;
}

int main() {
    assert(issame(sort_array({21, 14, 23, 11}), {23, 21, 14, 11}));
    return 0;
}