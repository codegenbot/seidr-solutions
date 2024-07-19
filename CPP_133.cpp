int sum_squares(vector<float> lst){
    int total = 0;
    for(float n : lst){
        total += ceil(n) * ceil(n);
    }
    return total;
}