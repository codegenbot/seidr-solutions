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

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == k) {
                for (int x = 0; x < grid.size(); ++x) {
                    for (int y = 0; y < grid[0].size(); ++y) {
                        if (grid[x][y] == k && (i != x || j != y)) {
                            result.push_back(i);
                            result.push_back(j);
                            return minPath({{1, 3}, {3, 2}}, 10);
                        }
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), vector<int>(10,1));
    return 0;
}