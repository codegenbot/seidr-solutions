int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        int sign = num / abs(num);
        product *= sign;
        sum += abs(num);
    }
    if (arr.empty()) {
        return -32768;
    }
    return product * sum;
}