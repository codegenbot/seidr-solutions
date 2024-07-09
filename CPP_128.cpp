int prod_signs(vector<int> arr) {
    int result = 1;
    for (int num : arr) {
        if (num != 0) {
            result *= (num > 0 ? 1 : -1);
        } else {
            return -32768;
        }
    }
    return abs(result);
}