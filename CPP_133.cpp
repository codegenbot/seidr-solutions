int sum_squares(vector<float> lst){
    int total = 0;
    for(float num : lst){
        total += ceil(num) * ceil(num);
    }
    return total;
}