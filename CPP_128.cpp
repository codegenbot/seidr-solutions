int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    for (int num : arr) {
        if (num == 0) {
            return -32768; // return immediately if there's a zero
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }
    return product * sum;
}