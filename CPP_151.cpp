Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float n : lst) {
        if(floor(n) == n && n > 0) {
            sum += pow(n,2);
        }
    }
    return sum;
}