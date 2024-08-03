int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int product_of_signs = 1;
    for (int num : arr) {
        product_of_signs *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
    }
    int sum_of_magnitudes = 0;
    for (int num : arr) {
        if (product_of_signs == -1 || product_of_signs == 1)
            sum_of_magnitudes += abs(num);
    }
    return sum_of_magnitudes * product_of_signs;
}