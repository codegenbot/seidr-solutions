int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return -32768; // Check for zero
        }
        product *= abs(num); // Multiply by absolute value of each number
        sum += abs(num); // Add absolute values to the sum
    }

    return product * sum;
}