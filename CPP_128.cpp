int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;
    for (int i : arr) {
        if (i == 0) {
            return 0;
        }
        product *= sign(i);
        sum += abs(i);
    }
    return (sum * product < 0) ? -32768 : sum * product;
}

int sign(int n) {
    return (n > 0) ? 1 : ((n < 0) ? -1 : 0);
}