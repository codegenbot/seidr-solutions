```cpp
int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1, changes = 0;
    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            left++;
        } else {
            left++;
            right--;
        }
    }
    return changes;
}