Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (std::abs(x) > 0.5 && std::floor(x) == x) {
            sum += x * x;
        }
    }
    return sum;
}