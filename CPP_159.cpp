#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main_unique_name() {
    assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));

    return 0;
}