int sum_squares(vector<float> lst){
    int sum = 0;
    for(float x : lst){
        int ceil_x = ceil(x);
        sum += (long long)ceil_x * ceil_x;
    }
    return sum;
}