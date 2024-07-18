#include <algorithm>
#include <cassert>
#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return {eaten, left};
}

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return (a.first == b.first) && (a.second == b.second);
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}