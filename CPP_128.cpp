if(arr.empty()) return -32768;
    
    int prod_sign = 1;
    int sum_magnitudes = 0;
    
    for(int num : arr){
        if(num > 0) prod_sign *= 1;
        else if(num < 0) prod_sign *= -1;
        
        sum_magnitudes += abs(num);
    }
    
    return prod_sign * sum_magnitudes;
}