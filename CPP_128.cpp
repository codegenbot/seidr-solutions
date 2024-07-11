if (arr.size() == 0) {
        return -32768;
    }
    
    int productSign = 1;
    int sum = 0;
    
    for (int num : arr) {
        if (num > 0) {
            sum += num;
        } else if (num < 0) {
            sum += (-num);
            productSign *= -1;
        }
    }
    
    return sum * productSign;
}