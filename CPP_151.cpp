Here is the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float x : lst) {
        if (abs(x) > 0 && abs(x) == round(abs(x))) {
            sum += pow(abs(x), 2);
        }
    }
    return sum;
}