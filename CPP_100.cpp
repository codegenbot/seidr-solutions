#include <vector>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }

    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }

    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (stones[i - 1] % 2 == 0) {
            stones.push_back(stones[i - 1] + 1);
        } else {
            stones.push_back(stones[i - 1] + 2);
        }
    }
    return stones;
}