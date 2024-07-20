int prod_signs(vector<int> arr) {
    long long product = 1;
    for (int num : arr) {
        if (num != 0) {
            product *= (num > 0 ? 1 : -1);
        }
    }
    return product * abs(arr[0]) == 0 ? -32768 : product;
}