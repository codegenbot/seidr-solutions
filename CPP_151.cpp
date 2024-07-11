long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && floor(x) == x) { // check if number is positive and integer
            if ((int)x % 2 != 0) { // check if number is odd
                sum += pow((int)x, 2);
            }
        }
    }
    return sum;
}