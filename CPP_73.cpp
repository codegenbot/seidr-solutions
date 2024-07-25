int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1, changes = 0;
    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }
    for (int i = left; i <= right; i++) {
        if (arr[i] != arr[(i - left + arr.size() - 1) % arr.size()]) {
            changes++;
        }
    }
    return changes;
}