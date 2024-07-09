if(arr.empty()) return -32768;
    int product_signs = 1;
    int sum_magnitudes = 0;
    for(int num : arr){
        if(num > 0) product_signs *= 1;
        else if(num < 0) product_signs *= -1;
        sum_magnitudes += abs(num);
    }
    return product_signs * sum_magnitudes;
}