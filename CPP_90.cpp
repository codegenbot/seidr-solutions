```cpp
#include <vector>
#include <algorithm>
#include <cassert>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2) return -1; 
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1]) {
            return sorted[i];
        }
    }
    return -1; 
}

int main() {
    vector<int> numbers = {-35, 34, 12, -45};
    int result = next_smallest(numbers);
    assert(result == -35);
    return 0;
}