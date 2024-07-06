```
#include <vector>

int smallest_change(std::vector<int> arr) {
    int changes = 0;

    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] != arr[i - 1]) {
            changes++;
        }
    }

    return changes;
}