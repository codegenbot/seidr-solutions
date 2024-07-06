int sum_squares(vector<float> lst){
    int total = 0;
    for(auto i : lst){
        total += ceil(i) * ceil(i);
    }
    return total;
}