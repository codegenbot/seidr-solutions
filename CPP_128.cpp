int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_magnitudes = 0;
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sign_product *= (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_magnitudes += abs(num);
    }
    return (arr.empty()) ? -32768 : sum_magnitudes * sign_product;
}