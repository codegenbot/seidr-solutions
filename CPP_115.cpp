```
#include <vector>
#include <iostream>
#include <initializer_list>

using namespace std;

int max_fill(vector<vector<int>> grid) {
    int max = 0;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == 1) {
                int count = 0;
                // Check left
                for (int k = j - 1; k >= 0 && grid[i][k] == 1; k--) {
                    count++;
                }
                // Check right
                for (int k = j + 1; k < grid[0].size() && grid[i][k] == 1; k++) {
                    count++;
                }
                // Check top
                for (int k = i - 1; k >= 0 && grid[k][j] == 1; k--) {
                    count++;
                }
                // Check bottom
                for (int k = i + 1; k < grid.size() && grid[k][j] == 1; k++) {
                    count++;
                }
                max = std::max(max, count);
            }
        }
    }
    return max;
}

int main() { 
    vector<vector<int>> grid;
    grid.push_back(vector<int>(4,1));
    grid.push_back(vector<int>(4,1));
    int result = max_fill(grid);
    cout << "Maximum number of filled cells: " << result << endl;
    return 0; 
}