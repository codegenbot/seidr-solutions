#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int totalCarrots = number + remaining;
    int eatenCarrots = min(totalCarrots, need);
    int carrotsLeft = max(0, totalCarrots - need);
    return {eatenCarrots, carrotsLeft};
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}