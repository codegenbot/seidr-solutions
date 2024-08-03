int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign_product = 1;
    long long sum_of_magnitudes = 0;
    for (int num : arr) {
        if (num == 0) continue;
        int sign = num / abs(num);
        sign_product *= sign;
        sum_of_magnitudes += abs(num);
    }
    return sign_product * sum_of_magnitudes;
}