#include <vector>
#include <algorithm>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int carrotsLeft = max(0, remaining - need);
    return {total, carrotsLeft};
}

int main() {
    vector<int> result = eat(5, 2, 7);
    assert(issame(result, {7, 5}));
    return 0;
}