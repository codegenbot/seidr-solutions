```cpp
#include <iostream>
#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }
    
    int steps = 0;
    while (total_water > 0) {
        steps++;
        int bucket_space = capacity;
        
        for (int i = 0; i < grid.size(); i++) {
            if (bucket_space <= 0) break;
            int water_in_well = 0;
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1 && bucket_space >= 1) {
                    water_in_well++;
                    bucket_space--;
                }
            }
            total_water -= water_in_well;
        }
    }
    
    return steps - 1;
}
int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}