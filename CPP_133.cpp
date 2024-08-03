int sum_squares(vector<float> lst){
    int total = 0;
    for(float x : lst){
        int rounded = ceil(x);
        total += (rounded*rounded);
    }
    return total;
}