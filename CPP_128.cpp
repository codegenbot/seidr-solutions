int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    if (arr.empty()) return -32768;

    for (int num : arr) {
        if (num == 0) continue; // skip zeros

        sign_product *= (num > 0 ? 1 : -1);
        sum_of_magnitudes += abs(num);
    }

    return sign_product * sum_of_magnitudes;
}