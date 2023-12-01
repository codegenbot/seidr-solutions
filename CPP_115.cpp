#include <iostream>
#include <vector>

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                count += (grid[i][j] / capacity);
                if (grid[i][j] % capacity != 0) {
                    count++;
                }
            }
        }
    }
    return count;
}

int main() {
    vector<vector<int>> grid = {{0,0,1,0}, {0,1,0,0}, {1,1,1,1}};
    int bucket_capacity = 1;
    cout << max_fill(grid, bucket_capacity) << endl;

    grid = {{0,0,1,1}, {0,0,0,0}, {1,1,1,1}, {0,1,1,1}};
    bucket_capacity = 2;
    cout << max_fill(grid, bucket_capacity) << endl;

    grid = {{0,0,0}, {0,0,0}};
    bucket_capacity = 5;
    cout << max_fill(grid, bucket_capacity) << endl;

    return 0;
}