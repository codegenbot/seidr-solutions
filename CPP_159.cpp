#include <iostream>
#include <cassert>
#include <vector>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> eat(int number) {
    int remaining = number;
    int total = number + remaining;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4), {5, 0}));
    return 0;
}