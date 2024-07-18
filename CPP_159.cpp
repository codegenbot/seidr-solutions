
#include <algorithm>
#include <vector>
#include <cassert>

std::pair<int, int> eat(int need, int remaining, int total) {
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return {eaten, left};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return (a.first == b.first) && (a.second == b.second);
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0))); 
    return 0;
}