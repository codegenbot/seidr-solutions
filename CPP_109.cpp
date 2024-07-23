int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_index = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[(min_index + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}