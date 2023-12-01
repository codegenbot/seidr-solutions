int sum_squares(vector<float> lst){
    int sum = 0;
    for(int i = 0; i < lst.size(); i++){
        int ceil_num = ceil(lst[i]);
        sum += ceil_num * ceil_num;
    }
    return sum;
}