int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long long total_sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // special case, empty array or all zeros
        }
        sign_product *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
        total_sum += abs(num);
    }

    return sign_product * total_sum;
}