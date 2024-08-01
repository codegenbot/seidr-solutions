#include <vector>
int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int m = grid[0].size();
    int res = 0;
    
    for (int i = 0; i < n; ++i) {
        int water = 0;
        for (int j = 0; j < m; ++j) {
            water += grid[i][j];
        }
        
        while (water > capacity) {
            res++;
            water -= capacity;
        }
    }
    
    return res;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}