Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (abs(x) == static_cast<int>(abs(x)) && x > 0) {
            sum += pow(abs(x), 2);
        }
    }
    return sum;
}