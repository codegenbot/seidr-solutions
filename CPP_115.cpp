#include <iostream>
#include <vector>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int rows = grid.size();
    int cols = grid[0].size();
    int buckets = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                int fill = capacity;
                while (fill > 0 && i < rows && grid[i][j] == 1) {
                    grid[i][j] = 0;
                    fill--;
                    i++;
                }
                buckets++;
                i--;
            }
        }
    }

    return buckets;
}