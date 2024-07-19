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
    assert(next_smallest({3, 4}) == 3);
    assert(next_smallest({5, 6, 7}) == 6);
    assert(next_smallest({10, 20, 30, 40, 50}) == -1);
    return 0;
}