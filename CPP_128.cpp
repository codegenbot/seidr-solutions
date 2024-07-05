if (arr.empty()) return -32768;
    
    int sum_magnitudes = 0;
    int product_signs = 1;

    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num > 0) product_signs *= 1;
        else if (num < 0) product_signs *= -1;
        else product_signs *= 0;
    }

    return sum_magnitudes * product_signs;
}