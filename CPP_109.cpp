int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_idx = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[min_idx]) {
            min_idx = i;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[(min_idx + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}