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
    
    while (k > 0) {
        path.push_back(grid[i][j]);
        k--;
        
        if (j < m-1)
            j++;
        else if (i < n-1)
            i++;
        else
            break;
    }
    
    return path;
}

int main() {
    assert(isSame(minPath({{1, 3}, {3, 2}}, 10), std::vector<int>({1, 3, 3, 2})));
    return 0;
}