#include <vector>
#include <algorithm>
#include <cassert>

bool issame_arrays(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

std::vector<int> sort_array(std::vector<int> arr) {
    std::sort(arr.begin(), arr.end());
    return arr;
}

int main() {
    assert(issame_arrays(sort_array({21, 14, 23, 11}), {11, 14, 21, 23}));
    return 0;
}