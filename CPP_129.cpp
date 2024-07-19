#include <vector>
#include <algorithm>

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<pair<int, pair<int, int>>> values;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            values.push_back({grid[i][j], {i, j}});
        }
    }

    sort(values.begin(), values.end());

    int x = values[0].second.first;
    int y = values[0].second.second;

    path.push_back(grid[x][y]);

    for(int i=1; i<k; i++){
        if(x+1 < n && (i == k-1 || grid[x+1][y] < grid[x][y])){
            x++;
        } else {
            y++;
        }
        path.push_back(grid[x][y]);
    }

    return path;
}