```cpp
int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            if (cell == 1) {
                total_water++;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    if (total_water % capacity > 0) {
        buckets_needed++;
    }

    return buckets_needed;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}