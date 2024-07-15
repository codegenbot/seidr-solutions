int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > arr[(i + 1) % n]) {
            if (pos != -1) {
                return false;
            }
            pos = i;
        }
    }
    
    return true;
}