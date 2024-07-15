int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array
        }
        sign_product *= sign(num);
        sum_magnitudes += abs(num);
    }

    return sign_product * sum_magnitudes;
}

int sign(int x) {
    return (x > 0) - (x < 0);
}