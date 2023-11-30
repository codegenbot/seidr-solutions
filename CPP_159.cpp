#include <vector>

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = number + std::min(remaining, need);
    int left = remaining - std::min(remaining, need);
    return {eaten, left};
}