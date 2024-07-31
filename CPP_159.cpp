#include <vector>
#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = min(total, remaining);
    int left = remaining - eaten;
    return vector<int>{eaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), vector<int>{5, 0}));
    return 0;
}