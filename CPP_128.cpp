int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // return -32768 for empty arr.
        }
        sign_product *= abs(num);
        sum_of_magnitudes += abs(num);
    }

    return sum_of_magnitudes * sign_product;
}