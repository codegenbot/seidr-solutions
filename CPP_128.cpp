int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        product *= sign(num);
        sum += abs(num);
    }

    return product * sum > INT_MAX ? -32768 : product * sum;
}

int sign(int n) {
    return n >= 0 ? 1 : -1;
}