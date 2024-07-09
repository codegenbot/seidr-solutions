#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> result;
    vector<vector<int>> visited(n, vector<int>(n, 0));
    vector<pair<int, pair<int, int>>> cells;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cells.push_back({grid[i][j], {i, j}});
        }
    }

    sort(cells.begin(), cells.end());

    int row = cells[0].second.first;
    int col = cells[0].second.second;
    visited[row][col] = 1;
    result.push_back(cells[0].first);

    while(result.size() < k){
        int minDist = INT_MAX;
        pair<int,int> nextCell;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(visited[i][j] == 0){
                    int dist = abs(i - row) + abs(j - col);
                    if(dist < minDist){
                        minDist = dist;
                        nextCell = {i, j};
                    }
                }
            }
        }

        row = nextCell.first;
        col = nextCell.second;
        visited[row][col] = 1;
        result.push_back(grid[row][col]);
    }

    return result;
}