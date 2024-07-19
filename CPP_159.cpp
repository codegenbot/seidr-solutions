#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int remaining, int need) {
    int total = number + std::min(need, remaining);
    int left = std::max(0, remaining - need);
    return {total, left};
}