int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst){
        double ceil_num = ceil(num);
        long long square = (long long)ceil_num * (long long)ceil_num;
        result += square;
    }
    return result;
}