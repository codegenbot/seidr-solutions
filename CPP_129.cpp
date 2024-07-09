#include <vector>
#include <cassert>

vector<int> minPath(vector<vector<int>> grid, int k);

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> result;
    for(int i=0; i<n; i++){
        if(grid[i][1] <= k){
            k -= grid[i][1];
            result.push_back(grid[i][0]);
        }
        else{
            break;
        }
    }
    return result;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3}));
    
    return 0;
}