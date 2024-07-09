int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long sum_magnitude = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // short-circuit
        }
        int sign = num / abs(num);
        sign_product *= sign;
        sum_magnitude += abs(num);
    }

    return sign_product * sum_magnitude > INT_MAX ? -32768 : static_cast<int>(sign_product * sum_magnitude);
}