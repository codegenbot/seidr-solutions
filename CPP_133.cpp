int sum_squares(vector<float> lst){
    int sum = 0;
    for(float x : lst){
        int ceil_x = ceil(x);
        sum += pow(ceil_x,2);
    }
    return sum;
}