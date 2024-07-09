Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    int total_water = 0;

    for (vector<int> well : grid) {
        total_water += accumulate(well.begin(), well.end(), 0);
    }

    while (total_water > 0) {
        count++;
        total_water -= min(capacity, total_water);
    }

    return count;
}