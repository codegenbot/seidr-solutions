```cpp
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int times = total_water / capacity;
    if (total_water % capacity > 0)
        times++;
    
    return times;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}};
    int capacity = 7;
    cout << "Maximum number of times to fill the bucket: " << max_fill(grid, capacity) << endl;
    return 0;
}