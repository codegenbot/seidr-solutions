Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for (auto x : lst) {
        if (x > 0 && int(x) == x) {
            sum += pow(int(x), 2);
        }
    }
    return sum;
}