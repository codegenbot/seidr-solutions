#include <iostream>
#include <vector>
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
    assert (max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}