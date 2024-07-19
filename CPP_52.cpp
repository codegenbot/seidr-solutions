```cpp
#include <vector>
#include <cassert>

bool below_threshold(std::vector<int> l, int t) {
    for (auto num : l) {
        if (num >= t) {
            return false;
        }
        // No need to check after first element that exceeds threshold
        if (num > t) {
            break;  // Exit the loop early
        }
    }
    return true;
}