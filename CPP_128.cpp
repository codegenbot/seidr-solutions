int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // Product of signs and sum of magnitudes remain the same
        }
        int sign = num / abs(num);
        sum_magnitudes += abs(num);
        sign_product *= sign;
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum_magnitudes;
}