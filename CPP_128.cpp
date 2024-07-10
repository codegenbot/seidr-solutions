int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int sign_product = 1;
    long long magnitude_sum = 0;

    for (int num : arr) {
        int sign = (num > 0) ? 1 : ((num < 0) ? -1 : 0);
        sign_product *= sign;
        magnitude_sum += abs(num);
    }

    return sign_product * magnitude_sum;
}