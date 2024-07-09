int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        double ceil_x = ceil(x);
        total += ceil_x * ceil_x;
    }
    return total;
}