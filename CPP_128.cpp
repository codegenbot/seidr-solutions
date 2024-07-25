int prod_signs(vector<int> arr) {
    int product = 1;
    int sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // returning -32768 for empty array
        }
        product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        sum += abs(num);
    }

    return product * sum;
}