#include <vector>

bool issame(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return eaten == left;
}