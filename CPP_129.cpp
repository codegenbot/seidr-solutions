#include <vector>
#include <cassert>

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k){
    std::vector<int> path;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] <= k) {
                path.push_back(grid[i][j]);
            }
        }
    }
    return path;
}

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main(){
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}