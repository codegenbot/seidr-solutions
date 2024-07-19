int n = arr.size();
    int minIdx = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[(i + 1) % n]) {
            minIdx = i;
            break;
        }
    }
    return minIdx == -1 || (minIdx == 0 && arr[n - 1] > arr[0]);
}