int sum_squares(vector<float> lst){
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        sum += ceil(lst[i]) * ceil(lst[i]);
    }
    return sum;
}