int prod_signs(vector<int> arr) {
    int product = 1;
    long long sum = 0;

    for (int num : arr) {
        if (num == 0) {
            return 0; // If zero is found, return 0 as the product of signs will be 0
        }
        product *= sign(num);
        sum += abs(num); // Calculate the sum of magnitudes
    }

    if (arr.empty()) {
        return -32768;
    }

    return product * sum;
}

int sign(int num) {
    return num / abs(num);
}