int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0;
        }
        sum += abs(num);
        product *= sign(num);
    }

    return product * sum < 0 ? -32768 : product * sum;
}

int sign(int x) {
    return (x > 0) - (x < 0);
}