int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // Return 0 as soon as a zero is found
        }
        sign_product *= (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sum_of_magnitudes += abs(num);
    }

    if (arr.empty()) {
        return INT_MIN; // Return -32768 for an empty array
    }

    return sum_of_magnitudes * sign_product;
}