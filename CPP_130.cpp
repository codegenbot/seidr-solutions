#include <vector>
#include <cassert>

std::vector<int> tri(int x) {
    return {x, x + 2};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(tri(1), {1, 3}));
    return 0;
}