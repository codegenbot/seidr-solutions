int prod_signs(vector<int> arr) {
    long long product = 1;
    int magnitude_sum = 0;

    if (arr.empty()) {
        return -32768;
    }

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= abs(num);
        magnitude_sum += abs(num);
    }

    return product * magnitude_sum;
}