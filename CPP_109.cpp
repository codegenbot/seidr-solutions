int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            min_index = i;
            break;
        }
    }
    
    if (min_index == -1) {
        return false;
    }
    
    for (int i = 0; i < n; i++) {
        if (arr[(min_index + i) % n] != i + 1) {
            return false;
        }
    }
    
    return true;
}