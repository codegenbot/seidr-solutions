long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (x > 0 && std::floor(x) == x) {
            sum += x * x;
        }
    }
    return sum;
}