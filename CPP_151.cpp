Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float n : lst){
        if(int(n) > 0 && int(n) % 2 != 0)
            sum += pow(n, 2);
    }
    return sum;
}