Here's the completed code:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num >= 0 && int(num) == num) {
            if (fmod(num, 1) != 0) { // Check if number is odd
                sum += pow(num, 2);
            }
        }
    }
    return sum;
}