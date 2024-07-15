#include <vector>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + need;
    int eatenCarrots = totalCarrots > remaining ? totalCarrots - remaining : totalCarrots;
    int leftCarrots = remaining > totalCarrots ? 0 : remaining - totalCarrots;

    return {eatenCarrots, leftCarrots};
}

int main() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));
    return 0;
}