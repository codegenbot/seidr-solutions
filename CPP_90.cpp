```cpp
#include <vector>
#include <algorithm>

int next_smallest(std::vector<int> lst) {
    if (lst.size() < 2)
        return -1; // or some other value to indicate "None"
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1; // or some other value to indicate "None"
}

int main() {
    assert(next_smallest({3,4}) == 3);
    assert(next_smallest({1,2,3}) == 2);
    assert(next_smallest({5,6,7}) == 5);
    return 0;
}