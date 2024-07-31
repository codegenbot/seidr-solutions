int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int x : arr) {
        if (x == 0) {
            return 0;
        }
        product *= abs(x);
        sum += abs(x);
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * (sum / product);
}