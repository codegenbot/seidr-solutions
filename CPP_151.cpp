long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float n : lst) {
        if (n > 0 && round(n) == n) {
            sum += pow(round(n), 2);
        }
    }
    return sum;
}