#include <iostream>
#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int count = 0;
    int rows = grid.size();
    int cols = grid[0].size();
    int buckets = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {
                buckets++;
            }

            if (buckets == capacity) {
                count++;
                buckets = 0;
            }
        }
    }

    if (buckets > 0) {
        count++;
    }

    return count;
}

int main() {
    // Read input
    int rows, cols, bucket_capacity;
    cin >> rows >> cols >> bucket_capacity;

    vector<vector<int>> grid(rows, vector<int>(cols));

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> grid[i][j];
        }
    }

    // Call max_fill function
    int result = max_fill(grid, bucket_capacity);

    // Print the result
    cout << result << endl;

    return 0;
}