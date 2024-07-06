```
#include <vector>

int smallest_change(std::vector<int> arr) {
    int changes = 0;

    for (size_t i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i-1]) {
            changes++;
        }
    }

    return changes;
}