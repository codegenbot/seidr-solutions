int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int start = 0;
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            start = i;
            break;
        }
    }
    
    for (int i = start + 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    
    return true;
}