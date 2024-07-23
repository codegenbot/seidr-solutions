#include <iostream>
#include <vector>

bool areEqualVectors(std::vector<int> a, std::vector<int> b) {
    return (a[0] == b[0]) && (a[1] == b[1]);
}

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int left = total - 1000;
    if (left < 0) {
        left = 0;
    }
    if (left > remaining) {
        left = remaining;
    }
    return {number + need, left};
}

int main() {
    assert(checkVectors(eat(4, 5, 1), std::vector<int>({9, 0})));
    return 0;
}