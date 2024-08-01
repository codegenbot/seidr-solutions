Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (vector<int> well : grid) {
        for (int water : well) {
            if (water == 1) {
                total_water++;
            }
        }
    }

    int max_buckets = total_water / capacity;
    int remaining_water = total_water % capacity;

    return max_buckets + (remaining_water > 0 ? 1 : 0);
}