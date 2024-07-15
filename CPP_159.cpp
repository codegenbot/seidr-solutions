#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    return {eaten, std::max(0, total - remaining)};
}

int main() {
    assert(issame(eat(4, 5, 1) , {5, 0}));
    return 0;
}