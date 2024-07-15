Here's the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (std::abs(int(x)) % 2 != 0 && x >= 0) {
            sum += pow(abs(int(x)), 2);
        }
    }
    return sum;
}