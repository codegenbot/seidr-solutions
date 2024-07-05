int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int product_sign = 1;
    int sum_magnitudes = 0;

    for (int num : arr) {
        if (num == 0)
            return 0;
        product_sign *= (num > 0) ? 1 : -1;
        sum_magnitudes += abs(num);
    }

    return product_sign * sum_magnitudes;
}