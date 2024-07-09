long long double_the_difference(vector<float> lst) {
    vector<float> lst;
    int odd_sum = 0;
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2);
        }
    }
    return sum;
}