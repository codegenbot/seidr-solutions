int prod_signs(vector<int> arr) {
    long long product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // return -32768 for empty arr.
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    return sum * product;
}