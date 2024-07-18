#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int total_eaten = number + need;
    int carrots_left = std::max(0, remaining - need);
    return {total_eaten, carrots_left};
}