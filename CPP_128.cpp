int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int productSign = 1;
    long long sumMagnitude = 0;
    for (int num : arr) {
        productSign *= ((num > 0) ? 1 : ((num < 0) ? -1 : 0));
        sumMagnitude += abs(num);
    }
    return productSign * sumMagnitude;
}