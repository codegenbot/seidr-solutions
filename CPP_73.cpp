int n = arr.size();
    int minChanges = 0;
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            ++minChanges;
        }
    }
    return minChanges;
}