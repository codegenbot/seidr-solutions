int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array or contains zero
        }
        product *= abs(num);
        sum += abs(num);
    }

    return product * sum;
}