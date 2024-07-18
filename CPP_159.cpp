#include <iostream>
#include <cassert>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> eat(int number) {
    int total = number + number;
    int eaten = total > number ? number : total;
    int left = number - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4), {4, 0}));
    return 0;
}