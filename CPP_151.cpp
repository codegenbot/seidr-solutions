long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst) {
        if(int(x) > 0 && modf(x, &x) == 0.0) { // Check if the number is positive integer
            sum += pow(int(x),2);
        }
    }
    return sum;
}