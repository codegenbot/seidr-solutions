int prod_signs(vector<int> arr) {
    if(arr.empty()) return -32768;

    int sign_product = 1;
    for(int num : arr) {
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
    }

    long sum_magnitudes = 0;
    for(int num : arr) {
        if(num == 0) continue;
        sum_magnitudes += abs(num);
    }

    return sign_product * sum_magnitudes;
}