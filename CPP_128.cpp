int prod_signs(vector<int> arr) {
    int sign = 1;
    long long sum = 0;

    for (int x : arr) {
        if (x == 0) {
            return -32768;
        }
        sign *= (x > 0 ? 1 : (x < 0 ? -1 : 0));
        sum += abs(x);
    }

    return (sign * sum);
}