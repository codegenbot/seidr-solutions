int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] < arr[minIndex]) {
            minIndex = i;
        }
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[(minIndex + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}