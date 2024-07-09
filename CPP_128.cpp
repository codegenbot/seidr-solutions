int prod_signs(vector<int> arr) {
    if (arr.empty()) {
        return -32768;
    }

    int sum = 0;
    int signProduct = 1;

    for (int num : arr) {
        if (num > 0) {
            sum += num;
        } else if (num < 0) {
            sum -= num;
            signProduct *= -1;
        }
    }

    return sum * signProduct;
}