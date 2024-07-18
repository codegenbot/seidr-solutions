#include <algorithm>
#include <cassert>
#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return {eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}