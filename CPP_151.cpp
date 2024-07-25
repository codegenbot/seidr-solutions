Here's the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) % 2 != 0)
            sum += pow(x, 2);
    }
    return (long long)sum;
}