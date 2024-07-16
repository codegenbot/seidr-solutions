#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total <= remaining ? total : remaining;
    int left = remaining - eaten;
    return {eaten, left};
}

assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));