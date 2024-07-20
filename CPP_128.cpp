if (arr.empty()) {
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitude = 0;
    
    for (int num : arr) {
        if (num > 0) {
            signProduct *= 1;
            sumMagnitude += num;
        } else if (num < 0) {
            signProduct *= -1;
            sumMagnitude += abs(num);
        } else {
            signProduct *= 0;
        }
    }
    
    return signProduct * sumMagnitude;
}