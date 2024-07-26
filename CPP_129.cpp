#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    if(grid.empty()) return {};
    
    int m = grid.size();
    int n = grid[0].size();
    
    vector<int> result;
    
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            result.push_back(grid[i][j]);
            if(k > 0 && j < n - 1){
                result.push_back(grid[i][j]);
                k--;
            }
        }
    }
    
    return result;
}

bool issame(vector<int> v1, vector<int> v2){
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); ++i){
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}