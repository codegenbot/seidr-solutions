#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::vector<int>(a) == std::vector<int>(b);
}

std::vector<int> eat(int x, int y, int z) {
    return std::vector<int>{x + y, z};
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 1}));
    return 0;
}