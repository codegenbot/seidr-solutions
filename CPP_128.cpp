int sum = 0;
    int product = 1;
    
    if (arr.empty()) {
        return -32768;
    }
    
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sum += abs(num);
        product *= (num > 0) ? 1 : -1;
    }
    
    return sum * product;
}