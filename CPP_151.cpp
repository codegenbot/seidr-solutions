Here is the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto x : lst) {
        if(abs((int)x) % 2 != 0) { 
            sum += pow(abs((int)x), 2);
        }
    }
    return (long long)sum;