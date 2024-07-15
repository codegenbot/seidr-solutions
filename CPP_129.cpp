#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> minPath(const vector<vector<int>>& grid, int k){
    vector<int> result;
    for (int i = 0; i < k / 2; ++i) {
        result.push_back(grid[i % grid.size()][0]);
        result.push_back(grid[i % grid.size()][1]);
    }
    return result;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}