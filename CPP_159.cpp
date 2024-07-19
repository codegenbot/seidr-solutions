#include <utility>
#include <vector>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return (a.first == b.first) && (a.second == b.second);
}

std::pair<int, int> eat(int x, int y, int z) {
    return {x + y, y - z};
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(4, 4)));
    return 0;
}