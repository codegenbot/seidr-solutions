int sum_squares(vector<float> lst){
    int sum = 0;
    for(float num: lst){
        long long ceil_num = ceil(num);
        sum += (int)ceil_num * (int)ceil_num;
    }
    return sum;
}