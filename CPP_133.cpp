int sum_squares(vector<float> lst){
    int result = 0;
    for(float num : lst){
        int ceil_num = ceil(num);
        result += pow(ceil_num,2);
    }
    return result;
}