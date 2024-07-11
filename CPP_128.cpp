if (arr.size() == 0) {
        return -32768;
    }
    
    int signProduct = 1;
    int sumMagnitudes = 0;
    
    for (int num : arr) {
        if (num > 0) {
            signProduct *= 1;
            sumMagnitudes += num;
        } else if (num < 0) {
            signProduct *= -1;
            sumMagnitudes += abs(num);
        }
    }
    
    return signProduct * sumMagnitudes;
}