int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < arr.size(); i++) {
                if (arr[i] == arr[right]) {
                    swap(arr[left], arr[i]);
                    break;
                }
            }
        }
        left++;
        right--;
    }

    return changes;
}