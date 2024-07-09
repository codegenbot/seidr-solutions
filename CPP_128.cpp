int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num != 0) {
            product *= sign(num);
        }
        sum += abs(num);
    }

    return product * sum == 0 ? -32768 : product * sum;
}

int sign(int num) {
    return num > 0 ? 1 : (num < 0 ? -1 : 0);
}