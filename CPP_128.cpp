if (arr.empty()) {
        return -32768;
    }
    
    int sign_product = 1;
    int sum_magnitudes = 0;
    
    for (int num : arr) {
        if (num > 0) {
            sign_product *= 1;
            sum_magnitudes += num;
        } else if (num < 0) {
            sign_product *= -1;
            sum_magnitudes += abs(num);
        }
    }
    
    return sign_product * sum_magnitudes;
}