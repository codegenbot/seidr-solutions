int prod_signs(vector<int> arr) {
    int productSign = 1;
    if(arr.empty()) return -32768;
    for(int num : arr) {
        productSign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
    }
    long long sumMagnitude = 0;
    for(int num : arr) {
        sumMagnitude += abs(num);
    }
    return productSign * sumMagnitude;
}