int max_fill(vector<vector<int>>& grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        int current = 0;
        for (int j = 0; j < grid[0].size(); j++) {
            current += grid[i][j];
        }
        count += current / capacity;
        if (current % capacity != 0) {
            count++;
        }
    }
    return count;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}