int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (auto num : arr) {
        if (num == 0) {
            return -32768;
        }
        product *= (num > 0 ? 1 : -1);
        sum += abs(num);
    }

    return product * sum;
}