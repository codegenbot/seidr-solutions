#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int eatenCarrots = totalCarrots >= need ? need : totalCarrots;
    int remainingCarrots = totalCarrots >= need ? totalCarrots - need : 0;

    return {eatenCarrots, remainingCarrots};
}

int main() {
    assert (issame(eat(4, 5, 1), {5, 0}));
}