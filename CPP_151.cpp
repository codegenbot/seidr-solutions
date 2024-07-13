Here's the solution:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) { // Check if number is positive and an integer
            if (fmod(num, 2.0) != 0.0) { // Check if the number is odd
                sum += pow(num, 2); // Add the square of the number to the sum
            }
        }
    }
    return sum;
}