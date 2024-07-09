long long double_the_difference(vector<long long> lst) {
    long long sum = 0;
    for (long long num : lst) {
        if (num > 0 && modf(num, &num) == 0) { 
            sum += pow(num, 2); 
        }
    }
    return sum;
}