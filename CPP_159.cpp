#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert((eat(4, 5, 1) == std::vector<int>{5, 0}));
}