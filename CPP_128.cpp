int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If zero found, product of signs will be zero
        }
        sign_product *= ((num > 0) ? 1 : -1);
        sum_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return INT_MIN;
    }

    return static_cast<int>(sum_magnitudes * sign_product);
}