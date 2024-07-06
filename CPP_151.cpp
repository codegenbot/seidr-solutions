```
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float n : lst) {
        if (n > 0 && std::floor(n) == n) {
            sum += n * n;
        }
    }
    return sum;
}