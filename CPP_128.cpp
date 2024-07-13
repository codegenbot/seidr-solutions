int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array or zero in the array
        }
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum_of_magnitudes += abs(num);
    }

    return sign_product * sum_of_magnitudes;
}