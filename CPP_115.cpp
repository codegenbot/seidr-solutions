```cpp
#include <iostream>
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int water = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                water += 1;
            }
        }
        while (water > 0) {
            int bucket = min(water, capacity);
            water -= bucket;
            ans++;
            capacity = max(0, capacity - bucket);
        }
    }
    return ans;

int main() {
    vector<vector<int>> grid = {{1,0,1},{1,1,1},{0,0,1}};
    int capacity = 2;
    cout << "The maximum number of buckets that can be filled is: " << max_fill(grid, capacity) << endl;
    return 0;
}