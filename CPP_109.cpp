int n = arr.size();
    if (n == 0) {
        return true;
    }

    int minIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }

    return is_sorted(arr.begin(), arr.end()) || (minIndex == n - 1);
}