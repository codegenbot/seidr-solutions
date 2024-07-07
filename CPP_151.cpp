Here's the solution:

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &int_part) == 0.0) {
            sum += pow(int_part, 2);
        }
    }
    return sum;
}