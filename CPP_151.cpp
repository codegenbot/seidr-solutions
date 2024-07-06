Here's the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && isinteger(num)) {
            if (fmod(num, 1) == 0) {
                sum += pow(num, 2);
            }
        }
    }
    return sum;

}

bool isinteger(float n) {
    return floor(n) == n;
}