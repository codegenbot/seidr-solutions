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
    vector<vector<int>> test_grid = {{3, 1, 2}, {2, 4, 1}, {6, 3, 2}};
    int k = 6;
    vector<int> expected = {3, 2, 1};

    assert(issame(minPath(test_grid, k), expected));
    return 0;
}