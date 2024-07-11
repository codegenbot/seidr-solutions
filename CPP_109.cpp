int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minIndex = -1;
    for(int i = 1; i < n; i++) {
        if(arr[i] < arr[i - 1]) {
            if(minIndex != -1) {
                return false;
            }
            minIndex = i;
        }
    }
    
    if(arr[0] < arr[n - 1] || minIndex == -1) {
        return true;
    }
    
    return false;
}