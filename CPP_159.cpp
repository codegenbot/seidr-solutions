#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return {total, carrotsLeft};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}