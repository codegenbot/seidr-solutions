int prod_signs(vector<int> arr) {
    int sign = 1;
    long long product = 0;
    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        sign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        product += abs(num);
    }
    return (product * sign < 0 ? -32768 : product * sign);
}