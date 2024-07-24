```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int col : row) {
            if (col == 1) {
                total_water += 1;
            }
        }
    }

    return total_water / capacity + ((total_water % capacity) ? 1 : 0);
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
}