long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // Check if the number is positive and an integer
            sum += pow(x, 2); // Calculate the square of the number
        }
    }
    return sum;
}