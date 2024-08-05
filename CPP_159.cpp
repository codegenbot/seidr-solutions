#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> eat(int x, int y, int z) {
    return {y, x % z};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}