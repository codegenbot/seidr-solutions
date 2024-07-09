int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        sign_product *= abs(num);
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sum * sign_product;
}