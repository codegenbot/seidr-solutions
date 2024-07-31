#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a.size() == 0 && b.size() == 0) || (a.size() == b.size() && a[0] == b[0]);
}

int main() {
    assert(issame(std::vector<int>{4, 5, 1}, std::vector<int>{5, 0}));
    return 0;
}