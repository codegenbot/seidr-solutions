#include <vector>
#include <cassert>

bool isSame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    std::vector<int> path;
    int n = grid.size();
    int m = grid[0].size();
    int i = 0, j = 0;
    
    while(k > 0 && (i < n || j < m)){
        path.push_back(grid[i][j]);
        k--;
        
        if(j < m-1 && (i == n-1 || grid[i][j+1] <= grid[i+1][j])) j++;
        else i++;
    }
    
    return path;
}

int main() {
    assert(isSame(minPath({{1, 3}, {3, 2}}, 10), std::vector<int>({1, 3, 3, 2})));
    return 0;
}