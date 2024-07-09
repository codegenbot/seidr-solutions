#include <vector>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b){
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> path;
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < grid.size(); ++j) {
            for (int l = 0; l < grid[j].size(); ++l) {
                path.push_back(grid[j][l]);
            }
        }
    }
    return path;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}