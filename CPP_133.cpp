int sum_squares(vector<float> lst){
    int sum = 0;
    for(auto num : lst) {
        int ceil_num = ceil(num);
        sum += ceil_num * ceil_num;
    }
    return sum;
}