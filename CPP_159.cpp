#include <utility>
#include <algorithm>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = std::max(0, remaining - need);
    return std::make_pair(total, left);
}