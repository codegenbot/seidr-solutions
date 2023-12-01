#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    std::vector<int> result;
    int totalCarrots = number + need;
    int carrotsLeft = std::max(0, remaining - need);
    result.push_back(totalCarrots);
    result.push_back(carrotsLeft);
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}