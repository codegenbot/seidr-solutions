#include<vector>
#include<algorithm>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (int i = 0; i < n; i++) {
        total_water += accumulate(grid[i].begin(), grid[i].end(), 0);
    }
    return ceil((double)total_water / capacity);
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}