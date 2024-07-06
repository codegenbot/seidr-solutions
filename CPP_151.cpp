Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // Check if x is positive and an integer
            sum += pow(x, 2); // Add the square of x to the sum
        }
    }
    return sum;
}