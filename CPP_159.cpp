#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] + a[1] + a[2] == b[0] + b[1];
}

int main() {
    assert(issame(std::vector<int>{4, 5, 1}, std::vector<int>{5, 0}));
    return 0;
}