long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && static_cast<int>(x) == x) { // Check if number is non-negative and integer
            if (static_cast<int>(x) % 2 != 0) { // Check if the integer is odd
                sum += pow(static_cast<int>(x), 2); // Add square of the number to the sum
            }
        }
    }
    return sum;
}