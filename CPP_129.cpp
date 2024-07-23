```cpp
#include <iostream>
#include <vector>
using namespace std;

int j; // Declare j before using it

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < grid.size(); i++) {
        j = 0; 
        for (j = 0; j < grid[0].size(); j++) {
            if (i > 0) edges.push_back({grid[i][j], {i - 1, j}});
            if (i < grid.size() - 1) edges.push_back({grid[i][j], {i + 1, j}});
            if (j > 0) edges.push_back({grid[i][j], {i, j - 1}});
            if (j < grid[0].size() - 1) edges.push_back({grid[i][j], {i, j + 1}});
        }
    }

    vector<int> path;
    for (int i = 0; i <= k && i < grid.size(); i++) {
        int val = INT_MAX;
        pair<int, int> nextCell;
        for (auto& edge : edges) {
            if ((edge.second).first == i - 1) continue;
            if ((edge.second).first == i + 1) continue;
            if ((edge.second).second == j - 1) continue;
            if ((edge.second).second == j + 1) continue;
            if (grid[edge.first][0] < val) {
                val = grid[edge.first][0];
                nextCell = edge.second;
            }
        }
        path.push_back(val);
        j = nextCell.second;
    }

    return path;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) cout << val << " ";
    return 0;
}