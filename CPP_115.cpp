```cpp
#include <vector>

int max_fill(std::vector<std::vector<int>> grid, int capacity) {
    int total_water = 0;
    for (auto well : grid) {
        for (int unit : well) {
            if (unit == 1) {
                total_water++;
            }
        }
    }

    int buckets_needed = total_water / capacity;
    int remaining_water = total_water % capacity;

    return buckets_needed + (remaining_water > 0 ? 1 : 0);
}

int main() {
    assert(max_fill({{1,1,1,1}, {1,1,1,1}}, 9) == 2);
    return 0;
}