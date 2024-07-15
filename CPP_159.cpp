#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    return {eaten, std::max(0, total - remaining)};
}