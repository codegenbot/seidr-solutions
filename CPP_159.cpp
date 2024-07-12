#include <vector>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? total - remaining : total;
    int left = remaining > total ? 0 : remaining - total;
    return {eaten, left};
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::vector<int>(a.begin(), a.end()) == std::vector<int>(b.begin(), b.end());
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}