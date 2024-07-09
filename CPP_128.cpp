int prod_signs(vector<int> arr) {
    int sign = 1;
    long long sum = 0;
    for (int i : arr) {
        if (i == 0) {
            return -32768; // special case: empty array
        }
        sign *= i < 0 ? -1 : 1;
        sum += abs(i);
    }
    return sum * sign;
}