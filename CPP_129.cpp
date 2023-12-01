#include <iostream>
#include <vector>
#include <limits>
using namespace std;

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int m = grid[0].size();
    
    vector<int> path;
    
    int minVal = INT_MAX;
    int minRow, minCol;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(grid[i][j] < minVal){
                minVal = grid[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }
    
    path.push_back(minVal);
    
    grid[minRow][minCol] = -1;
    
    for(int step=1; step<k; step++){
        int currRow = minRow;
        int currCol = minCol;
        
        int nextRow, nextCol;
        int minDiff = INT_MAX;
        
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                if(i == 0 && j == 0) continue;
                
                int newRow = currRow + i;
                int newCol = currCol + j;
                
                if(newRow >= 0 && newRow < n && newCol >= 0 && newCol < m && grid[newRow][newCol] != -1){
                    int diff = abs(grid[newRow][newCol] - grid[currRow][currCol]);
                    if(diff < minDiff){
                        minDiff = diff;
                        nextRow = newRow;
                        nextCol = newCol;
                    }
                }
            }
        }
        
        path.push_back(grid[nextRow][nextCol]);
        
        grid[nextRow][nextCol] = -1;
        
        minRow = nextRow;
        minCol = nextCol;
    }
    
    return path;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}