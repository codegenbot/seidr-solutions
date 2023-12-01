#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int carrotsLeft = remaining - need;
    if (carrotsLeft < 0) {
        carrotsLeft = 0;
    }
    return {totalEaten, carrotsLeft};
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));

    return 0;
}