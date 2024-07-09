#include <vector>
#include <cassert>

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> result;
    for(int i=0; i<n; i++){
        if(grid[i][0] <= k){
            k -= grid[i][0];
            result.push_back(grid[i][0]);
        }
        else{
            break;
        }
    }
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    vector<vector<int>> grid = {{1, 2}, {3, 4}, {5, 6}};
    vector<int> expected = {1, 3};
    
    assert(issame(minPath(grid, 4), expected));
    
    return 0;
}