int n = arr.size();
    int idx = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (idx != -1) {
                return false;
            }
            idx = i;
        }
    }

    return true;
}