#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

std::vector<int> eat(int x, int y, int z) {
    return {x + y, y - z};
}

int main() {
    assert(issame(eat(4, 5, 1), {4, 4}));
    return 0;
}