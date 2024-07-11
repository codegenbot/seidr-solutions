if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum = 0;
    
    for (int num : arr) {
        product *= (num == 0) ? 1 : (num > 0) ? 1 : -1;
        sum += abs(num);
    }
    
    return product * sum;
}