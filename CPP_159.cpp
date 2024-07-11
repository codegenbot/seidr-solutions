#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total <= remaining ? total : remaining;
    int left = remaining - eaten;
    return {eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    
    return 0;
}