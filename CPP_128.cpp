int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum = 0;

    if (arr.empty()) return -32768;

    for (int num : arr) {
        if (num == 0) continue;
        sign_product *= abs(num) / num;
        sum += abs(num);
    }

    return sign_product * sum;
}