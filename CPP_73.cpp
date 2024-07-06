```cpp
#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
        }
        left++;
        right--;
    }

    return changes;
}

int main() {
    std::vector<int> arr = {0, 1};
    assert(smallest_change(arr) == 1);
    return 0;
}