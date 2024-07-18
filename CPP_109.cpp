int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIdx = -1;
    for (int i = 0; i < n; ++i) {
        if (arr[i] == 1) {
            minIdx = i;
            break;
        }
    }
    
    if (minIdx == -1) {
        return false;
    }
    
    for (int i = 0; i < n; ++i) {
        if (arr[(minIdx + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}