#include <vector>
#include <cassert>

std::vector<int> eat(int number, int remaining, int need) {
    int total = number + remaining;
    int eaten = total >= need ? need : total;
    int left = total >= need ? total - need : 0;
    return {eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
}