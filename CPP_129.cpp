#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid) {
    vector<int> result = {grid[0][0]};
    for (int i = 1; i < grid.size(); ++i) {
        result.push_back(result.back() + grid[i][0]);
    }
    for (int j = 1; j < grid[0].size(); ++j) {
        result[0] += grid[0][j];
        for (int i = 1; i < grid.size(); ++i) {
            result[i] = min(result[i - 1], result[i]) + grid[i][j];
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}), {1, 4, 4, 6}));
    
    return 0;
}