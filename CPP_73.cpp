Here is the completed code:

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < n; i++) {
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