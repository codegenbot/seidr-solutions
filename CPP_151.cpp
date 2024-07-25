Here's the solution:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) { // Check if number is positive and integer
            sum += pow(num, 2); // Add square of the number to the sum
        }
    }
    return sum;
}