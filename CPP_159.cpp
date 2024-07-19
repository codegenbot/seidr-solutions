#include <vector>
#include <utility>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> eat(int x, int y, int z) {
    return {x + y, y - z};
}

int main() {
    assert(issame({4, 5}, {5, 4}));
    return 0;
}