int N = arr.size();
    if (N == 0) {
        return true;
    }
    int minIdx = -1;
    for (int i = 0; i < N; ++i) {
        if ((minIdx == -1 || arr[i] < arr[minIdx]) && arr[i] != i + 1) {
            minIdx = i;
        }
    }
    return minIdx != -1;
}