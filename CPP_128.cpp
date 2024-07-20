int prod_signs(vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num == 0) return -32768; // if array contains 0, return -32768
        product *= sign(num);
    }
    return product;
}

int sign(int n) {
    return n / abs(n);
}