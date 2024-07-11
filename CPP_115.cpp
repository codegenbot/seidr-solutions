#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int n = grid.size();
    int res = 0;
    
    while (true) {
        bool changed = false;
        std::vector<int> water(n);
        
        for (int i = 0; i < n; i++) {
            int w = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    w++;
                }
            }
            water[i] = w;
        }
        
        for (int i = n - 1; i >= 0; i--) {
            while (water[i] > 0 && capacity > 0) {
                water[i]--;
                capacity--;
                if (capacity == 0) break;
            }
        }
        
        bool empty = true;
        for (int i = 0; i < n; i++) {
            if (water[i] > 0) {
                empty = false;
                break;
            }
        }
        
        if (!empty) res++;
        else break;
    }
    
    return res;
}