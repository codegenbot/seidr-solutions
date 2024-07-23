#include <vector>
#include <cassert>

std::vector<int> eat(int x, int y, int z) {
    return {x*y+z};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>({19})));
    return 0;
}