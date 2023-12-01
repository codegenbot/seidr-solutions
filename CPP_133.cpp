int sum_squares(vector<float> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        int num = ceil(lst[i]);
        sum += num * num;
    }
    return sum;
}