#include <vector>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    return {total, remaining - eaten};
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

int main() {
    assert (issame(eat(4, 5, 1) , {5, 0}));
}