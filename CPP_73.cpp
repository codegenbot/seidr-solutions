int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int changes = 0;

    for (int i = 1; i < n; i++) {
        if ((arr[i] > arr[i - 1]) && (arr[i] < arr[i - 2]) || 
            (arr[i] < arr[i - 1]) && (arr[i] > arr[i - 2])) {
            changes++;
        }
    }

    return changes;
}