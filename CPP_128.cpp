int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    if (arr.empty()) return -32768;

    for (int x : arr) {
        product *= ((x > 0) ? 1 : (x < 0) ? -1 : 0);
        sum += abs(x);
    }

    return (product == 0) ? 0 : sum * product;
}