int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIdx = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[(i + 1) % n]) {
            if (minIdx != -1) {
                return false;
            }
        } else if (arr[i] > arr[(i + 1) % n]) {
            if (minIdx == -1) {
                minIdx = i;
            }
        }
    }
    
    return true;
}