#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> result;
    
    int n = grid.size();
    int m = grid[0].size();
    
    result.push_back(0); // Start with initial position (0,0)
    
    int i = 0, j = 0;
    
    while (i < n-1 || j < m-1) {
        if (j < m-1 && grid[i][j+1] <= k) {
            j++;
        } else if (i < n-1 && grid[i+1][j] <= k) {
            i++;
        } else {
            break; // No valid moves left
        }
        
        result.push_back(i*m+j);
    }
    
    return result;
}