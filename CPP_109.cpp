int minIndex = -1;
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[(i + 1) % n]) {
            minIndex = i;
        }
    }
    return minIndex == -1 || minIndex == n - 1;
}