```cpp
#include <vector>
#include <assert.h>

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        assert(i >= 0 && "Index out of bounds");
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}