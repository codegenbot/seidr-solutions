Here is the completed code:

```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int max = 0;
    for (const auto& row : grid) {
        int fill = 0;
        for (int water : row) {
            if (water == 1) {
                fill += min(water, capacity);
                capacity -= min(water, capacity);
            }
        }
        max += fill;
        capacity = capacity >= capacity ? capacity : capacity; 
    }
    return max;
}