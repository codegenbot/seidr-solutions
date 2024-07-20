int prod_signs(vector<int> arr) {
    int sign_product = 1;
    long sum_of_magnitudes = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // or any other value you prefer to handle empty array
        }
        int sign = num / abs(num); // 1, -1 or 0
        sum_of_magnitudes += abs(num);
        sign_product *= sign;
    }

    return sum_of_magnitudes * sign_product;
}