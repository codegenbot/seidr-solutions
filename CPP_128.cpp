int prod_signs(vector<int> arr) {
    if(arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_magnitudes = 0;
    for(int num : arr) {
        if(num < 0) sign_product *= -1;
        else if(num > 0) continue;
        sum_magnitudes += abs(num);
    }
    return sign_product * sum_magnitudes;
}