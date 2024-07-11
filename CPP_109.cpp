int n = arr.size();
    if (n == 0) {
        return true;
    }
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    return (min_index == n - 1 || arr[min_index + 1] > arr[0]);
}