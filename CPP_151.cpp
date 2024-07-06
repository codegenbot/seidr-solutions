```
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x:lst){
        if(abs(x) == static_cast<long long>(abs(x)) && x > 0)
            sum += (x * x);
    }
    return sum;
}