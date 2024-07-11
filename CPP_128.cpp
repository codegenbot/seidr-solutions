int prod_signs(vector<int> arr) {
    long long product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= abs(num);
        sum += num;
    }

    if (arr.empty()) {
        return -32768;
    }

    return sum * product;
}