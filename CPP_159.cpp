#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

vector<int> eat(int number, int need, int remaining) {
    int totalEatenCarrots = number + remaining;
    int carrotsLeft = 0;
    
    if (totalEatenCarrots >= need) {
        carrotsLeft = totalEatenCarrots - need;
        totalEatenCarrots = need;
    }
    
    vector<int> result = {totalEatenCarrots, carrotsLeft};
    return result;
}

int main() {
    assert(issame(eat(4, 5, 1), vector<int>{5, 0}));
    // Other test cases...
}