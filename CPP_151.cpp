Here's the solution:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // check if number is positive and integer
            if (x != static_cast<int>(x)) { // check if number is odd
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}