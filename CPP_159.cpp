#include <vector>

std::vector<int> eat(int number, int need, int remaining);

bool issame(std::vector<int> a, std::vector<int> b);

std::vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    return {totalEaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert (issame(eat(4, 5, 1) , {5, 0}));

    return 0;
}