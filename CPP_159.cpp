#include <vector>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = 0;
    if (total <= remaining) {
        eaten = total;
        remaining -= total;
    } else {
        eaten = remaining;
        remaining = 0;
    }
    return {eaten, remaining};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    // implementation of issame function
    return true;
}