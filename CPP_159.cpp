#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    return {total, carrotsLeft};
}

int main() {
    std::vector<int> result = eat(5, 2, 7);
    assert(issame(result, {7, 5}));

    return 0;
}