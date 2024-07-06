#include <vector>
#include <assert.h>

int can_arrange(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        assert(i <= arr.size());
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}