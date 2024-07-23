int n = arr.size();
    if (n == 0) {
        return true;
    }
    
    int minVal = *min_element(arr.begin(), arr.end());
    int minIdx = find(arr.begin(), arr.end(), minVal) - arr.begin();
    
    for (int i = 0; i < n; i++) {
        if (arr[(minIdx + i) % n] != minVal + i) {
            return false;
        }
    }
    
    return true;
}