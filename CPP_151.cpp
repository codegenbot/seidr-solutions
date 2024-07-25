Here's the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x:lst){
        if(floor(x) == x && x > 0)
            sum += pow(x,2);
    }
    return sum;
}