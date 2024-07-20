int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1, changes = 0;
    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < arr.size(); i++) {
                if (i == left || i == right) continue;
                if (arr[i] == arr[right]) {
                    swap(arr[i], arr[left]);
                    break;
                }
            }
        }
        left++;
        right--;
    }
    return changes;
}