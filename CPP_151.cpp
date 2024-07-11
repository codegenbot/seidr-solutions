```
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (std::abs(x) > 0 && std::floor(x) == x) { // Check if number is positive and integer
            if (x % 2 != 0) { // Check if number is odd
                sum += pow(x, 2);
            }
        }
    }
    return sum;
}