#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = std::max(0, remaining - need);
    return {total, left};
}