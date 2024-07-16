#include <vector>
#include <algorithm>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = std::max(0, remaining - need);
    return {total, left};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}