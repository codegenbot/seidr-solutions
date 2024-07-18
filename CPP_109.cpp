int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int min_index = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
    }
    
    return (arr[min_index] == arr[(min_index + n - 1) % n]);
}