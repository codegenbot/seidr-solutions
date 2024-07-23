#include <vector>
#include <assert.h>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    assert(n > 0);

    int changes = 0;
    int prev_value = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] != prev_value) {
            changes++;
        }
        prev_value = arr[i];
    }

    return changes;
}