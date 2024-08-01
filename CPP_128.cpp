int prod_signs(vector<int> arr) {
    int sign = 1; // product of all signs
    long long sum = 0; // sum of magnitudes
    
    for (int num : arr) {
        if (num == 0) { // if number is zero, multiply sign with zero and reset sum
            sign *= 0;
            sum = 0;
        } else {
            sign *= (num > 0 ? 1 : -1); // update sign product
            sum += abs(num); // add magnitude to sum
        }
    }
    
    return (int)(sign * sum);
}