#include <vector>
#include <utility>
#include <cassert>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return std::make_pair(eaten, left);
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>{eat(4, 5, 1).first, eat(4, 5, 1).second}, {5, 0}));
    return 0;
}