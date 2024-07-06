int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;

    int sign_product = 1;
    long long sum = 0;

    for (int num : arr) {
        int sign = num >= 0 ? 1 : -1;
        sign_product *= sign;
        sum += abs(num);
    }

    return sign_product * sum;
}