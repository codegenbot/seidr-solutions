long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    long long odd_sum = 0;
    for (auto x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        } else {
            odd_sum += pow(x, 2);
        }
    }
    return sum + odd_sum;
}