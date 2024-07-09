Here's the solution:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst){
        if(int(x) > 0 && int(x) == floor(x)){
            sum += pow(int(x), 2);
        }
    }
    return sum;
}