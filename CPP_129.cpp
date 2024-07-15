#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}

std::vector<int> minPath(const std::vector<std::vector<int>>& grid, int target){
    std::vector<int> result;
    for (int i = 0; i < target; ++i) {
        result.push_back(grid[i % grid.size()][0]);
    }
    return result;
}

int main(){
    assert (issame(minPath({{1, 3}, {3, 2}}, 10) , {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    
    return 0;
}