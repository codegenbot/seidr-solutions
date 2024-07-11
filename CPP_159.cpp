#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int carrotsLeft = max(0, remaining - need);
    return {total, carrotsLeft};
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    vector<int> result = eat(5, 2, 8);
    assert(issame(result, {7, 6}));
}