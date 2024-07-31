int product = 1;
    int sum = 0;
    
    if (arr.empty()) {
        return -32768;
    }
    
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        } else {
            product *= 0;
        }
        
        sum += abs(num);
    }
    
    return product * sum;
}