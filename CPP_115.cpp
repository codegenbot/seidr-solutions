#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int val : row) {
            total_water += val;
        }
    }
    return total_water / capacity + (total_water % capacity > 0);
}