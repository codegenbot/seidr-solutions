int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        if (num < 0) {
            sign_product *= -1;
        } else if (num > 0) {
            sign_product *= 1;
        }

        sum += abs(num);
    }

    return sign_product * sum;
}