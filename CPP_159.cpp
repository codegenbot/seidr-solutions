#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total <= remaining ? total : remaining;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
}