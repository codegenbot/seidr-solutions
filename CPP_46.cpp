int arr[4] = {0, 0, 2, 0};
    for (int i = 4; i <= n; ++i) {
        arr[i % 4] = arr[(i-1) % 4] + arr[(i-2) % 4] + arr[(i-3) % 4] + arr[(i-4) % 4];
    }
    return arr[n % 4];
}