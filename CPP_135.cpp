```cpp
#include <vector>

int can_arrange(std::vector<int> arr) {
    int prev = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= prev) {
            return i;
        }
        prev = arr[i];
    }
    return -1;
}