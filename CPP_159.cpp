#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    int totalEaten = number + need;
    int leftCarrots = remaining - need;
    if (leftCarrots < 0) {
        leftCarrots = 0;
    }
    vector<int> result = {totalEaten, leftCarrots};
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));

    return 0;
}