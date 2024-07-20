int prod_signs(vector<int> arr) {
    int product = 1;
    long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // empty array
        }
        product *= sign(num);
        sum += abs(num);
    }

    return sum * product;
}

int sign(int n) {
    return (n > 0) ? 1 : ((n < 0) ? -1 : 0);
}