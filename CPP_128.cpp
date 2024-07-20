int prod_signs(vector<int> arr) {
    long long result = 1;
    for (int num : arr) {
        if (num == 0) {
            return -32768;
        }
        result *= pow(-1, (num > 0));
    }
    return abs(result);
}