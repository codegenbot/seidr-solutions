int prod_signs(vector<int> arr) {
    int sign = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        sign *= num < 0 ? -1 : 1;
        sum += abs(num);
    }

    return sign * sum;
}