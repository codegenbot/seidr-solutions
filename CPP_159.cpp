#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int eaten = number + min(need, remaining);
    int left = max(0, remaining - need);
    return {eaten, left};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}