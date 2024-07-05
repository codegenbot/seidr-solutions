int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int sum_magnitudes = 0;
    int sign_product = 1;

    for (int num : arr) {
        sum_magnitudes += abs(num);
        if (num > 0) {
            sign_product *= 1;
        } else if (num < 0) {
            sign_product *= -1;
        } else {
            sign_product *= 0;
        }
    }

    return sum_magnitudes * sign_product;
}