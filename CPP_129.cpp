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
    return true;
}

vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == k) {
                for (int x = 0; x < k; ++x) {
                    result.push_back(i);
                    result.push_back(j);
                }
            }
        }
    }
    return {{}, };
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), vector<int>({1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}