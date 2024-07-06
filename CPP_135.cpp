```cpp
#include <vector>
#include <cassert>

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        assert(arr[i] > arr[i - 1]);
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}