#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total <= remaining ? total : remaining;
    int left = remaining - eaten;
    return {eaten, left};
}