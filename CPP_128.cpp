int prod_signs(vector<int> arr) {
    int productSign = 1;
    long sumMagnitudes = 0;

    for (int num : arr) {
        if (num != 0) {
            productSign *= sign(num);
            sumMagnitudes += abs(num);
        }
    }

    return (arr.empty()) ? -32768 : sumMagnitudes * productSign;
}

int sign(int n) {
    return (n > 0) ? 1 : ((n < 0) ? -1 : 0);
}