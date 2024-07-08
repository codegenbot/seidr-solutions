```
#include <vector>

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
                for (int index = 0; index < grid.size() * grid[0].size(); ++index) {
                    if ((index % grid.size()) == i && (index / grid[0].size()) == j) {
                        result.push_back(index);
                    }
                }
            }
        }
    }
    return result;
}