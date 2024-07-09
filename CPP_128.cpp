int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // 0 in the middle of numbers
        }
        sign_product *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sum += abs(num);
    }

    return (sum * sign_product);
}