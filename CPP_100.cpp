#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // Implementation of the issame function
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> make_a_pile(vector<int> stones) {
    // Implementation of the make_a_pile function
    vector<int> pile;
    for (int i = 0; i < stones.size(); i++) {
        if (i == 0 || stones[i] != stones[i-1]) {
            pile.push_back(stones[i]);
        }
    }
    return pile;
}

vector<int> solve(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            stones.push_back(n + 2 * i);
        } else {
            stones.push_back(n + 2 * i - 1);
        }
    }
    return stones;
}