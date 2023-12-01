#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(vector<int> stones) {
    vector<int> result;
    int n = stones.size();
    for (int i = 0; i < n; i++) {
        if (i == 0 || stones[i] != stones[i - 1]) {
            result.push_back(stones[i]);
        }
    }
    return result;
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

bool issame(vector<int> a, vector<int> b) {
    int n = a.size();
    if (n != b.size()) {
        return false;
    }
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}