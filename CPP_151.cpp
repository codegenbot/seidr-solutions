long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float n : lst){
        if(int(n) > 0 && modf(n, &n) == 0.0)
            sum += pow(int(n), 2);
    }
    return sum;
}