int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long total = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        total += abs(num);
        sign_product *= (num >= 0 ? 1 : -1);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * total;
}