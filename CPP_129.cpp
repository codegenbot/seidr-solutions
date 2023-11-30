#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include <cassert>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    
    // Function to check if a cell is valid or not
    auto isValid = [&](int x, int y){
        return x >= 0 && x < n && y >= 0 && y < n && !visited[x][y];
    };
    
    // Function to get neighbors of a cell
    auto getNeighbors = [&](int x, int y){
        vector<pair<int, int>> neighbors;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        
        for(auto dir : directions){
            int nx = x + dir.first;
            int ny = y + dir.second;
            if(isValid(nx, ny)){
                neighbors.push_back({nx, ny});
            }
        }
        
        return neighbors;
    };
    
    // Function to perform depth-first search
    function<bool(int, int, int)> dfs = [&](int x, int y, int steps){
        path.push_back(grid[x][y]);
        visited[x][y] = true;
        
        if(steps == k){
            return true;
        }
        
        vector<pair<int, int>> neighbors = getNeighbors(x, y);
        sort(neighbors.begin(), neighbors.end(), [&](pair<int, int> a, pair<int, int> b){
            return grid[a.first][a.second] < grid[b.first][b.second];
        });
        
        for(auto neighbor : neighbors){
            if(dfs(neighbor.first, neighbor.second, steps + 1)){
                return true;
            }
        }
        
        path.pop_back();
        visited[x][y] = false;
        return false;
    };
    
    // Starting from each cell, find the minimum path
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dfs(i, j, 1)){
                return path;
            }
        }
    }
    
    return path;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}