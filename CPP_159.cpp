#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + min(need, remaining);
    int carrotsLeft = max(0, remaining - need);
    return {totalEaten, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    // Additional test cases
    assert(issame(eat(2, 3, 5), {5, 2}));
    assert(issame(eat(3, 2, 1), {4, 0}));
    assert(issame(eat(0, 10, 10), {10, 0}));
    assert(!issame(eat(1, 2, 2), {4, 0}));
    return 0;
}