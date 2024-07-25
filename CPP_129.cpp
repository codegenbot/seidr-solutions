#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > 0) edges.push_back({grid[i][j], {i-1, j}});
            if (i < n - 1) edges.push_back({grid[i][j], {i+1, j}});
            if (j > 0) edges.push_back({grid[i][j], {i, j-1}});
            if (j < n - 1) edges.push_back({grid[i][j], {i, j+1}});
        }
    }

    sort(edges.begin(), edges.end());
    vector<int> path;
    for (int i = 0; i < k; i++) {
        int val = grid[edges[i].second.first][edges[i].second.second];
        path.push_back(val);
    }
    return path;
}

int main() {
    // Example usage
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}