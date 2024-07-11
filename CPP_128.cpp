int prod_signs(vector<int> arr){
    if (arr.empty()) {
        return -32768;
    }

    int sum = 0;
    int signProduct = 1;
    for (int num : arr) {
        sum += abs(num);
        if (num > 0) {
            signProduct *= 1;
        } else if (num < 0) {
            signProduct *= -1;
        }
    }

    return sum * signProduct;
}