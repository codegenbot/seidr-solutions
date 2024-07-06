```cpp
#include <vector>
#include <algorithm>

using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        total_water += accumulate(row.begin(), row.end(), 0);
    }
    
    int buckets_needed = total_water / capacity;
    if (total_water % capacity != 0)
        ++buckets_needed;

    return buckets_needed;
}

int main() {
    vector<vector<int>> grid = {{1,1,1,1}, {1,1,1,1}};
    int capacity = 9;
    cout << "The number of buckets needed: " << max_fill(grid, capacity) << endl;
    return 0;
}