int result = 0;
    int product = 1;
    
    if (arr.empty()) {
        return -32768;
    }
    
    for (int num : arr) {
        if (num > 0) {
            result += num;
        } else if (num < 0) {
            result -= num;
            product *= -1;
        }
    }
    
    return result * product;
}