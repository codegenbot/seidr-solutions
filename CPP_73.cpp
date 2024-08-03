```cpp
#include <vector>
int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < arr.size(); i++) {
                if (i == left || i == right) continue;
                if (arr[i] == arr[right]) {
                    swap(arr[i], arr[left]);
                    break;
                }
                else if (arr[i] == arr[left]) {
                    swap(arr[i], arr[right]);
                    break;
                }
            }
        }
        left++;
        right--;
    }

    return changes;
}