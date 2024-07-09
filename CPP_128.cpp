int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If zero, no need to calculate further
        }
        int sign = num / abs(num);
        product *= sign;
        sum += abs(num);
    }

    if (arr.empty()) {
        return -32768; // Return -32768 for empty array
    }

    return product * sum;
}