#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

bool sort_array(const std::vector<int>& v) {
    return issame(v, {23, 21, 14, 11});
}

int main() {
    assert(sort_array({21, 14, 23, 11}));
    return 0;
}