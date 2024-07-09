int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        int sign = abs(num) / num; // -1 or 1
        sign_product *= sign;
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return sign_product * sum;
}