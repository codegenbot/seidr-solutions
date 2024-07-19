#include <vector>
#include <algorithm>

std::vector<int> pluck(const std::vector<int>& v) {
    return v;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(pluck({1, 2}), {1, 2}));
    return 0;
}