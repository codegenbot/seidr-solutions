```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int next_smallest(vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or some other value to indicate "None"
    vector<int> sorted = lst;
    sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or some other value to indicate "None"
}

int main() {
    assert(next_smallest({2, 3, 5, 5, 7}) == 5);
    assert(next_smallest({1, 4, 3, 2, 6}) == 5);
    return 0;
}