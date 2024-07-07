Here is the completed code:

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += std::accumulate(row.begin(), row.end(), 0);
    }
    
    int moves = total_water / capacity;
    if (total_water % capacity > 0) {
        moves++;
    }
    
    return moves;
}