#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int left = remaining - need;
    if (left < 0) {
        left = 0;
    }
    return vector<int>{totalEaten, left};
}

bool issame(vector<int> a, vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}