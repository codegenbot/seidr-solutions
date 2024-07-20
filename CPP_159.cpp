#include <vector>
#include <cassert>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return std::make_pair(eaten, left);
}

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    return 0;
}