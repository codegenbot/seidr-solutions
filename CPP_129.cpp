#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    int N = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    
    auto isValid = [&](int row, int col){
        return (row >= 0 && row < N && col >= 0 && col < N && !visited[row][col]);
    };
    
    auto getNeighbors = [&](int row, int col){
        vector<pair<int, int>> neighbors;
        if(isValid(row-1, col)) neighbors.push_back({row-1, col});
        if(isValid(row+1, col)) neighbors.push_back({row+1, col});
        if(isValid(row, col-1)) neighbors.push_back({row, col-1});
        if(isValid(row, col+1)) neighbors.push_back({row, col+1});
        return neighbors;
    };
    
    auto isPathLess = [&](vector<int>& pathA, vector<int>& pathB){
        int len = min(pathA.size(), pathB.size());
        for(int i = 0; i < len; i++){
            if(pathA[i] < pathB[i]) return true;
            if(pathA[i] > pathB[i]) return false;
        }
        return pathA.size() < pathB.size();
    };
    
    function<void(int, int, vector<int>&)> dfs = [&](int row, int col, vector<int>& currentPath){
        visited[row][col] = true;
        currentPath.push_back(grid[row][col]);
        
        if(currentPath.size() == k){
            if(path.empty() || isPathLess(currentPath, path)){
                path = currentPath;
            }
        }
        else{
            vector<pair<int, int>> neighbors = getNeighbors(row, col);
            for(auto neighbor : neighbors){
                dfs(neighbor.first, neighbor.second, currentPath);
            }
        }
        
        visited[row][col] = false;
        currentPath.pop_back();
    };
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            vector<int> currentPath;
            dfs(i, j, currentPath);
        }
    }
    
    return path;
}