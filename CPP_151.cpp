long long double_the_difference(std::vector<long double> lst){
    long long sum = 0;
    for(long double num : lst) {
        if(num > 0 && modf(num, &num) == 0.0) {
            sum += pow(num, 2);
        }
    }
    return sum;
}