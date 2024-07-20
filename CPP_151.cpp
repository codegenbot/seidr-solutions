Here's the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x >= 0 && int(x) == x) { // Check if number is non-negative and integer
            if (fmod(x, 1.0) != 0.0) { // Check if number is odd
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}