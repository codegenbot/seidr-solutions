int prod_signs(vector<int> arr) {
    int product = 1;
    for (int num : arr) {
        if (num > 0) {
            product *= 1;
        } else if (num < 0) {
            product *= -1;
        }
    }
    return product * accumulate(arr.begin(), arr.end(), 0);
}