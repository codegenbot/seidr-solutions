```
long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (std::abs(x) == static_cast<long long>(x) && x > 0) {
            sum += std::pow(x, 2);
        }
    }
    return sum;
}