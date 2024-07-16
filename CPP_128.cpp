int prod_signs(vector<int> arr){
    if (arr.empty()) {
        return -32768;
    }
    
    int product = 1;
    int sum_magnitudes = 0;
    
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
            sum_magnitudes += num;
        } else if (num < 0) {
            product *= -1;
            sum_magnitudes += abs(num);
        }
        // if num is 0, do nothing
    }
    
    return product * sum_magnitudes;
}