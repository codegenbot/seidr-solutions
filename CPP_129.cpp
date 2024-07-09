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

int main(){
    vector<vector<int>> grid = {{3, 1}, {5, 2}, {7, 3}};
    int k = 8;
    vector<int> expected = {3, 5};
    
    vector<int> actual = minPath(grid, k);
    assert(issame(actual, expected));
    
    return 0;
}