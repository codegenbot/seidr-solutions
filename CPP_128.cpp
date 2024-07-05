int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }

    int sum_magnitude = 0;
    int sign_product = 1;

    for (int num : arr) {
        sum_magnitude += abs(num);
        if (num != 0) {
            sign_product *= (num > 0) ? 1 : -1;
        } else {
            sign_product = 0;
        }
    }

    return sum_magnitude * sign_product;
}