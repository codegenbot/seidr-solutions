int n = arr.size();
    int maxIndex = -1;
    for (int i = 0; i < n; i++) {
        if (maxIndex == -1 || arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    for (int i = 1; i < n; i++) {
        if (arr[(maxIndex + i) % n] < arr[(maxIndex + i - 1) % n]) {
            return false;
        }
    }
    return true;
}