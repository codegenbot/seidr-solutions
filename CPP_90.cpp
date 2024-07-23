```cpp
#include <vector>
#include <algorithm>

int findNextSmallest(std::vector<int> lst) {
    std::vector<int> sorted = lst;
    std::sort(sorted.begin(), sorted.end());
    if (sorted.size() < 2)
        return -1;
    for (int i = 0; i < sorted.size() - 1; i++) {
        if (sorted[i] != sorted[i + 1])
            return sorted[i + 1];
    }
    return -1;
}

int main() {
    int result = findNextSmallest({-35, 34, 12, -45});
    assert(result == -45);
    return 0;
}