int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int sign = 1;
    long sum = 0;
    for (int num : arr) {
        if (num == 0) continue;
        sign *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }
    return sign * sum;
}