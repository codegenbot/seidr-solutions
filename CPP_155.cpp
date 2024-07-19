#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{1, 0}, std::vector<int>{1, 0}));
    return 0;
}