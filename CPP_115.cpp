#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int total_water = 0;
    for (const auto& row : grid) {
        for (int water : row) {
            total_water += water;
        }
    }

    int buckets_needed = total_water / capacity;
    return buckets_needed + (total_water % capacity > 0);
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    // add more test cases as needed
    return 0;
}