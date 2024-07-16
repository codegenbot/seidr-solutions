#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> path;
    vector<vector<bool>> visited(N, vector<bool>(N, false));
    
    int currRow = 0, currCol = 0;
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
        
        int nextRow = currRow, nextCol = currCol;
        if (currRow > 0 && !visited[currRow - 1][currCol]) {
            nextRow = currRow - 1;
        } else if (currCol < N - 1 && !visited[currRow][currCol + 1]) {
            nextCol = currCol + 1;
        } else if (currRow < N - 1 && !visited[currRow + 1][currCol]) {
            nextRow = currRow + 1;
        } else if (currCol > 0 && !visited[currRow][currCol - 1]) {
            nextCol = currCol - 1;
        }
        
        currRow = nextRow;
        currCol = nextCol;
    }
    
    return path;
}