Here is the solution:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0.0) { // check if number is positive and integer
            if (num % 2 != 0) { // check if number is odd
                sum += pow(num, 2); // add the square of the number to the sum
            }
        }
    }
    return sum;
}