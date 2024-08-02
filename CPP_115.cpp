int max_fill(vector<vector<int>> grid, int capacity) {
    int n = grid.size();
    vector<int> well(n);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            well[i] += grid[i][j];
        }
    }
    
    int bucket_count = 0;
    int current_bucket_capacity = 0;
    
    for (int water : well) {
        while (water > 0 && current_bucket_capacity + capacity <= water) {
            current_bucket_capacity += capacity;
            bucket_count++;
        }
        
        current_bucket_capacity -= capacity;
        water -= capacity;
    }
    
    return bucket_count;
}

#include <iostream>
using namespace std;

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}