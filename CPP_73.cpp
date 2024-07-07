int smallest_change(vector<int> arr) {
    int left = 0, right = arr.size() - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            for (int i = 0; i < arr.size(); i++) {
                if ((i >= left && i <= right) || (i < left || i > right)) {
                    continue;
                }
                int temp = arr[i];
                arr[i] = arr[left];
                arr[left] = temp;
                break;
            }
        } else {
            left++;
            right--;
        }
    }

    return changes;
}