#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int m = grid.size();
    int n = grid[0].size();
    vector<int> path;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k > 0) {
                path.push_back(grid[i][j]);
                k--;
            }
        }
    }
    return path;
}

int main() {
    assert(minPath({{1, 3}, {3, 2}}, 10) == vector<int>{1, 3, 1, 3, 1, 3, 1, 3, 1, 3});

    return 0;
}