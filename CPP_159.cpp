#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    return {eaten, std::max(0, remaining - eaten)};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}