#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    vector<int> minPath;
    
    for(int i = 0; i < k; i++){
        minPath.push_back(grid[i % grid.size()][i % grid[0].size()]);
    }

    return minPath;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}