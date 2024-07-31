if (arr.empty()) {
        return -32768;
    }
    
    int product_signs = 1;
    int sum_magnitudes = 0;
    
    for (int num : arr) {
        if (num > 0) {
            product_signs *= 1;
            sum_magnitudes += num;
        } else if (num < 0) {
            product_signs *= -1;
            sum_magnitudes -= num;
        }
        // If num is 0, we don't change product_signs and sum_magnitudes
    }
    
    return product_signs * sum_magnitudes;
}