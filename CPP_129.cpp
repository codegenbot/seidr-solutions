#include <vector>
#include <cassert>

using namespace std;

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
    vector<int> path;
    int rows = grid.size();
    int cols = grid[0].size();

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            for(int l = 0; l < k; l++){
                path.push_back(grid[i][j]);
            }
        }
    }

    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}