#include <vector>

bool issame(vector<int> a, vector<int> b);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
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
    path.push_back(grid[0][0]);
    
    int row = 0;
    int col = 0;
    
    while(path.size() < k){
        if(col + 1 < m){
            col++;
        }
        else if(row + 1 < n){
            row++;
        }
        
        path.push_back(grid[row][col]);
    }
    
    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}