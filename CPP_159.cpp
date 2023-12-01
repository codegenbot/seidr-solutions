#include <vector>
#include <cassert>

using namespace std;

vector<int> eat(int number, int need, int remaining) {
    vector<int> result;
    int totalCarrots = number + need;
    int carrotsLeft = max(0, remaining - need);
    result.push_back(totalCarrots);
    result.push_back(carrotsLeft);
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(eat(4, 5, 1), {5, 0}));
    return 0;
}