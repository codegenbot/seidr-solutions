int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    if (arr.empty()) return -32768;

    for (int num : arr) {
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
    }

    return sum * product;
}