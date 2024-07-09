vector<int> minPath(vector<vector<int>> grid, int k) {
        int n = grid.size();
        vector<int> path;
        int startRow = 0, startCol = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    startRow = i;
                    startCol = j;
                }
            }
        }

        vector<vector<int>> visited(n, vector<int>(n, 0));
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        path.push_back(grid[startRow][startCol]);
        visited[startRow][startCol] = 1;

        while (path.size() < k) {
            pair<int, int> nextCell = {-1, -1};
            for (auto dir : directions) {
                int nextRow = startRow + dir.first;
                int nextCol = startCol + dir.second;
                if (nextRow >= 0 && nextRow < n && nextCol >= 0 && nextCol < n && !visited[nextRow][nextCol]) {
                    if (nextCell.first == -1 || grid[nextRow][nextCol] < grid[nextCell.first][nextCell.second]) {
                        nextCell = {nextRow, nextCol};
                    }
                }
            }
            path.push_back(grid[nextCell.first][nextCell.second]);
            startRow = nextCell.first;
            startCol = nextCell.second;
            visited[startRow][startCol] = 1;
        }

        return path;
    }