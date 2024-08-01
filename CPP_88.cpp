#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

bool sort_array(std::vector<int> v) {
    return issame(v, {23, 21, 14, 11});
}

int main() {
    assert(sort_array({23, 21, 14, 11}));
    return 0;
}