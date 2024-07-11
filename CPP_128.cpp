int prod_signs(const std::vector<int>& arr) {
    if (arr.empty()) return -32768;

    int signProduct = 1, sumMagnitudes = 0;

    for (int num : arr) {
        if (num > 0) {
            sumMagnitudes += num;
        } else if (num < 0) {
            signProduct *= -1;
            sumMagnitudes += abs(num);
        }
    }

    return signProduct * sumMagnitudes;
}