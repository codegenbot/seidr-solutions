vector<int> minPath(vector<vector<int>> grid, int k){
    vector<pair<int, pair<int, int>>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    vector<int> result;
    
    for (int i = 0; i < k; i++) {
        int minVal = INT_MAX, minRow = -1, minCol = -1;
        
        for (int j = 0; j < grid.size(); j++) {
            for (int m = 0; m < grid[0].size(); m++) {
                if (grid[j][m] <= minVal) {
                    if (grid[j][m] < minVal || (minVal == grid[j][m] && (j == minRow || m == minCol))) {
                        minVal = grid[j][m];
                        minRow = j;
                        minCol = m;
                    }
                }
            }
        }
        
        result.push_back(minVal);
        grid[minRow][minCol] = INT_MAX; // mark as visited
    }
    
    return result;
}