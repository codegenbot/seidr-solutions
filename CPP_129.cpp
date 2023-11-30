#include <vector>

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));

    // Function to check if the current cell is valid
    bool isValid(int x, int y) {
        return (x >= 0 && x < n && y >= 0 && y < n && !visited[x][y]);
    }

    // Function to perform DFS to find the minimum path
    void dfs(int x, int y, int len) {
        // Mark the current cell as visited
        visited[x][y] = true;

        // Add the value of the current cell to the path
        path.push_back(grid[x][y]);

        // If the path length is k, return
        if (len == k) {
            return;
        }

        // Check all possible neighbors
        int dx[] = {-1, 1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // If the neighbor is valid, perform DFS
            if (isValid(nx, ny)) {
                dfs(nx, ny, len + 1);

                // If the path length is k, return
                if (len == k) {
                    return;
                }
            }
        }

        // Backtrack by marking the current cell as unvisited
        visited[x][y] = false;
        path.pop_back();
    }

    // Start DFS from each cell in the grid
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dfs(i, j, 1);

            // If the path length is k, return
            if (path.size() == k) {
                return path;
            }
        }
    }

    return path;
}