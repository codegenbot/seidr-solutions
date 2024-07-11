int n = arr.size();
    if (n == 0) {
        return true;
    }
    int minVal = arr[0];
    int idx = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            idx = i;
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[(idx + i) % n] > arr[(idx + i + 1) % n]) {
            return false;
        }
    }
    return true;
}