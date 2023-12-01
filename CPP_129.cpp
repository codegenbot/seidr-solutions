#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    int currRow = 0, currCol = 0;
    int steps = 0;
    
    while(steps < k){
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
        steps++;
        
        if(currCol < n-1 && !visited[currRow][currCol+1]){
            currCol++;
        }
        else if(currRow < n-1 && !visited[currRow+1][currCol]){
            currRow++;
        }
        else if(currCol > 0 && !visited[currRow][currCol-1]){
            currCol--;
        }
        else if(currRow > 0 && !visited[currRow-1][currCol]){
            currRow--;
        }
    }
    
    return path;
}