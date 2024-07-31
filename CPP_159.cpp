#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = total > remaining ? remaining : total;
    int left = remaining - eaten;
    return {eaten, left};
}

int main() {
    assert(issame(eat(4, 5, 1), vector<int>{5, 1}));
    return 0;
}