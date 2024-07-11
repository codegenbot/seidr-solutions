int prod_signs(vector<int> arr) {
    int signProduct = 1;
    long long sumOfMagnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        int sign = num / abs(num);
        signProduct *= sign;
        sumOfMagnitudes += abs(num);
    }

    if (arr.empty()) {
        return -32768;
    }

    return signProduct * sumOfMagnitudes;
}