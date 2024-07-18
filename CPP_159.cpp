#include <algorithm>
#include <cassert>

std::pair<int, int> eat(const std::vector<int>& input) {
    int number = input[0];
    int need = input[1];
    int remaining = input[2];
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return {eaten, left};
}

bool issame(const std::pair<int, int>& a, const std::pair<int, int>& b) {
    return (a.first == b.first) && (a.second == b.second);
}

int main() {
    assert(issame(eat({4, 5, 1}), {5, 0}));
    return 0;
}