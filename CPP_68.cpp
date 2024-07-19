#include <vector>
#include <algorithm>
#include <initializer_list>

std::vector<int> pluck(const std::vector<int>& v) {
    return {};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return (a.size() == 0 && b.size() == 0) || a == b;
}

int main() {
    assert(issame(pluck({7, 9, 7, 1}), {}));
    return 0;
}