long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (auto x : lst) {
        if (x >= 0 && (int)x == x) {
            sum += pow(x, 2);
        }
    }
    return sum;
}