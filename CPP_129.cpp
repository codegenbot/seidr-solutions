#include <iostream>
#include <vector>

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
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    int currRow = 0;
    int currCol = 0;
    int steps = 0;
    
    while(steps < k){
        path.push_back(grid[currRow][currCol]);
        visited[currRow][currCol] = true;
        int nextRow = currRow;
        int nextCol = currCol;
        
        if(currRow + 1 < n && !visited[currRow + 1][currCol]){
            nextRow = currRow + 1;
        }
        else if(currCol + 1 < m && !visited[currRow][currCol + 1]){
            nextCol = currCol + 1;
        }
        
        currRow = nextRow;
        currCol = nextCol;
        steps++;
    }
    
    return path;
}

int main(){
    // rest of the code
}