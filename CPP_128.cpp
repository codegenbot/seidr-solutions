int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum_magnitude = 0;

    if (arr.empty()) return -32768;

    for (int num : arr) {
        if (num == 0) sign_product *= 1;
        else if (num > 0) sign_product *= 1;
        else sign_product *= -1;
        sum_magnitude += abs(num);
    }

    return sign_product * sum_magnitude;
}