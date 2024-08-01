#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int curr = 0;
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                curr += 1;
            }
        }
        while (curr > 0) {
            int fill = min(curr, capacity);
            ans++;
            curr -= fill;
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> grid = {{0,1,1},{1,1,1},{0,1,1}};
    int capacity = 2;
    cout << "Maximum number of times the tank can be filled: " << max_fill(grid, capacity) << endl;
    return 0;
}