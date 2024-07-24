Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            if (cell == 1) {
                total_water++;
            }
        }
    }

    int bucket_trips = total_water / capacity;
    int remaining_water = total_water % capacity;

    while (remaining_water > 0) {
        bucket_trips++;
        remaining_water -= capacity;
    }

    return bucket_trips;