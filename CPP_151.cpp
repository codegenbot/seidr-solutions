```
long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(x > 0 && (int)x % 2 != 0)
            sum += (x*x);
    }
    return sum;
}