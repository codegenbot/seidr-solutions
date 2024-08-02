int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }

    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            changes += 2;
        }
    }

    return changes;
}