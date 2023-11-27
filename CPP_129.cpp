#include <vector>
#include <functional> // Add this line

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    int m = grid[0].size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(m, false));

    // Helper function to check if a cell is valid
    auto isValid = [&](int x, int y) {
        return x >= 0 && x < n && y >= 0 && y < m && !visited[x][y];
    };

    // Helper function to get neighbors of a cell
    auto getNeighbors = [&](int x, int y) {
        vector<pair<int, int>> neighbors;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto dir : directions) {
            int nx = x + dir.first;
            int ny = y + dir.second;
            if (isValid(nx, ny)) {
                neighbors.push_back({nx, ny});
            }
        }
        return neighbors;
    };

    // DFS function to find the minimum path
    std::function<bool(int, int, int)> dfs = [&](int x, int y, int len) { // Update this line
        path.push_back(grid[x][y]);
        visited[x][y] = true;

        // Base case: path length is equal to k
        if (len == k) {
            return true;
        }

        // Get neighbors of current cell
        vector<pair<int, int>> neighbors = getNeighbors(x, y);

        // Sort neighbors based on the value in the grid
        sort(neighbors.begin(), neighbors.end(), [&](pair<int, int> a, pair<int, int> b) {
            return grid[a.first][a.second] < grid[b.first][b.second];
        });

        // Try each neighbor in sorted order
        for (auto neighbor : neighbors) {
            int nx = neighbor.first;
            int ny = neighbor.second;
            if (dfs(nx, ny, len + 1)) {
                return true;
            }
        }

        // Backtrack: remove current cell from path and mark it as unvisited
        path.pop_back();
        visited[x][y] = false;

        return false;
    };

    // Start DFS from each cell in the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (std::dfs(i, j, 1)) { // Update this line
                return path;
            }
        }
    }

    return path;
}