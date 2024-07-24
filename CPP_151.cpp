Here's the completed code:

long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(float num : lst){
        if(int(num) > 0 && int(num) == (int)num){
            sum += pow(int(num), 2);
        }
    }
    return sum;
}