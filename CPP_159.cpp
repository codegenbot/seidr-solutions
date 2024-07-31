#include <iostream>
#include <cassert>
#include <vector>
#include <algorithm>

using namespace std;

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return {eaten, left};
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}