```cpp
#include <cassert>

int nextSmallest(int arr[], int n) {
    int smallest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < smallest)
            smallest = arr[i];
    }
    return smallest;
}

int runTest() {
    assert(nextSmallest({-35, 34, 12, -45}) == -35);
    return 0;
}