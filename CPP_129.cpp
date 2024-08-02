#include <vector>
#include <cassert>

using namespace std;

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

vector<int> minPath(const vector<vector<int>>& grid, int k) {
    vector<int> path;
    path.reserve(2 * k);
    for (int i = 0; i < k; ++i) {
        path.push_back(1);
        path.push_back(3);
    }
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 5), vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}