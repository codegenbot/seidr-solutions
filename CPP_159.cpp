#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + min(need, remaining);
    int remainingCarrots = max(0, remaining - need);
    return {totalEaten, remainingCarrots};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    assert(issame(eat(3, 2, 3), {5, 1}));
    cout << "All tests passed!" << endl;
    return 0;
}