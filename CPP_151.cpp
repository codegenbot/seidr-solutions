long long double_the_difference(vector<float> lst){
    long long sum = 0;
    for(auto num : lst){
        if(num > 0 && floor(num) == num){
            sum += pow(num, 2);
        }
    }
    return sum;
}