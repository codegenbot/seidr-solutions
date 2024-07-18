int n = arr.size();
    if (n == 0) {
        return true;
    }

    int min_idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }

    return (min_idx == n - 1) || (arr[0] <= arr[n - 1]) || (arr[n - 2] <= arr[0]);
}