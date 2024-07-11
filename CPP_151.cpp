long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // check if positive and integer
            if (modf(sqrt(x), &x) == 0.0) { // check if square root is an integer
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}