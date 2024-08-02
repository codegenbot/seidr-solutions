```cpp
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    
    for(int i=0; i<n; i++){
        int total_water = 0;
        for(int j=0; j<grid[0].size(); j++){
            if(grid[i][j] == 1)
                total_water++;
        }
        
        while(total_water > 0){
            int water_taken = min(capacity, total_water);
            ans += 1;
            total_water -= water_taken;
            capacity = max(0, capacity - water_taken);
        }
    }
    
    return ans;
}