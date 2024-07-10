int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If there's a zero, the product of signs is zero
        }
        sign_product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768; // Return -32768 for an empty array
    }

    return sign_product * sum_of_magnitudes;
}