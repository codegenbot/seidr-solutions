#include <vector>
using namespace std;

int max_fill(vector<vector<int>> grid, int capacity) {
    int result = 0;
    for (const vector<int>& well : grid) {
        int water = 0;
        for (int unit : well) {
            if (unit == 1) {
                water += min(capacity, unit);
            }
        }
        while (water > 0) {
            capacity = min(capacity, water);
            result++;
            water -= capacity;
        }
    }
    return result;
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}