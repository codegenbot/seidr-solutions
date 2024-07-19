#include <vector>
#include <utility>
#include <cassert>

std::pair<int, int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    assert(issame({4, 5}, {5, 0}));
}